//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
bool pathVis[1005];
bool cycle;

void dfs(int src){
    //node task
    vis[src] = true;
    pathVis[src] = true;

    //move next
    for(int child: adj_list[src]){
        if(vis[child] && pathVis[child]){
            cycle = true;
        }

        if(!vis[child]){
            dfs(child);
        }
    }

    //return
    pathVis[src] = false;
}

int main(){
    int n,e;
    cin>> n >> e;
    while(e--){
        int x,y;
        cin>> x >> y;
        adj_list[x].push_back(y);
    }

    //memory set
    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    cycle = false;

    //call BFS for both continued and discrete graph
    for(int i=0; i<n ;i++){
        if(!vis[i]) dfs(i);
    }

    //print
    (cycle)? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;
    
    return 0;
}