//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin>> n >> e;

    vector<pair<int, int>> edge_list;

    while(e--){
        int x, y;
        cin>> x >> y;
        edge_list.push_back({x,y});
    }

    for(auto p: edge_list){
        cout<< p.first <<" "<< p.second <<endl;
    }

    
    return 0;
}