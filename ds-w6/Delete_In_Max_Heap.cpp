//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void insertHeap(vector<int> &v, int val){
    //insert the value
    v.push_back(val);

    //swap with parent if necessary
    int cur_idx = v.size() - 1;
    while(cur_idx != 0){
        int par_idx = (cur_idx - 1)/2;
        if(v[par_idx] < v[cur_idx]){
            swap(v[par_idx], v[cur_idx]);
        }
        else{
            break;
        }
        cur_idx = par_idx;
    }
}

void printHeap(vector<int> v){
    for(int n : v){
        cout<< n <<" ";
    }
    cout<<endl;
}

void deleteHeap(vector<int> &v){
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    
    while(true){
        int left_idx = cur_idx*2 + 1;
        int right_idx = cur_idx*2 + 2;
        int left_val = INT_MIN, right_val = INT_MIN;

        if(left_idx < v.size()){
            left_val = v[left_idx];
        }

        if(right_idx < v.size()){
            right_val = v[right_idx];
        }

        if(left_val >= right_val && left_val > v[cur_idx]){
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        else if(right_val > left_val && right_val > v[cur_idx]){
            swap(v[right_idx], v[cur_idx]);
            cur_idx = right_idx;
        }
        else{
            break;
        }
    }
}

int main(){
    vector<int> v;
    int n;
    cin>> n;
    for(int i=0; i<n ;i++){
        int val;
        cin>> val;
        insertHeap(v, val);
    }

    deleteHeap(v);
    printHeap(v);
    deleteHeap(v);
    printHeap(v);
    deleteHeap(v);
    printHeap(v);

    return 0;
}