//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int cnt;

void dfs(int src){
    //node task
    vis[src] = true;

    //move next
    for(int child: adj_list[src]){
        if(!vis[child]){
            dfs(child);
        }
    }
}

int main(){
    int n, e;
    cin>> n >> e;
    while(e--){
        int x,y;
        cin>> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    //memory set
    memset(vis, false, sizeof(vis));
    cnt = 0;
    vector<pair<int,int>> roadConnector;
    vector<int> v;

    //call DFS
    for(int i=1; i<=n ;i++){
        if(!vis[i]){
            v.push_back(i);
            dfs(i);
            cnt++;
        }
    }

    //number of roads
    cout<< cnt-1 <<endl;

    for(int i=0; i<cnt-1 ;i++){
        roadConnector.push_back({v[i],v[i+1]});
    }

    for(auto p : roadConnector){
        cout<< p.first <<" "<< p.second <<endl;
    }

    
    return 0;
}