//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin>> n >> e;

    vector<int> adj_list[n];

    while(e--){
        int x, y;
        cin>> x >> y;
        adj_list[x].push_back(y);
    }

    for(int i=0; i<n ;i++){
        cout<< i <<"-> ";
        for(int num: adj_list[i]){
            cout<< num <<" ";
        }
        cout<<endl;
    }

    
    return 0;
}