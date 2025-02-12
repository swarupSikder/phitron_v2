//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int parent[1005];
bool cycle;

void dfs(int src){
    //node task
    vis[src] = true;

    //move next
    for(int child: adj_list[src]){
        if(vis[child] && parent[src] != child){
            cycle = true;
        }

        if(!vis[child]){
            parent[child] = src;
            dfs(child);
        }
    }
}

int main(){
    int n,e;
    cin>> n >> e;
    while(e--){
        int x,y;
        cin>> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    //memory set
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;

    //call BFS for both continued and discrete graph
    for(int i=0; i<n ;i++){
        if(!vis[i]) dfs(i);
    }

    //print
    (cycle)? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;
    
    return 0;
}