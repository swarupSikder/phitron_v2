//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin>> n >> e;
    vector<pair<int,int>> adj_list[n];

    while(e--){
        int a,b,w;
        cin>> a >> b >> w;
        adj_list[a].push_back({b,w});
        adj_list[b].push_back({a,w});
    }

    for(int i=0; i<n ;i++){
        cout<< i <<" -> ";
        for(pair<int,int> p : adj_list[i]){
            cout<< p.first <<" "<< p.second <<" , ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
input:

5 8
0 1 10
1 2 1
0 2 7
0 3 4
2 3 1
3 4 5
1 4 3
2 4 5

*/