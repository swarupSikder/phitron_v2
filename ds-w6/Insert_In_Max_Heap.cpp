//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0; i<n ;i++){
        cin>> v[i];
    }
    int val;
    cin>> val;

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
    }

    for(int n : v){
        cout<< n <<" ";
    }
    cout<<endl;
    
    return 0;
}