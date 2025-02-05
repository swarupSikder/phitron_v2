//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        //store and pop the front of the queue
        int par = q.front();
        q.pop();

        //work with that node
        cout<< par <<" ";

        //push the children
        for(int child: adj_list[par]){
            if(!vis[child]) q.push(child);
            vis[child] = true;
        }
    }
}

int main(){
    int n, e;
    cin>> n >> e;
    
    while(e--){
        int x, y;
        cin>> x >> y;

        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    memset(vis, false, sizeof(vis));
    bfs(4);
    
    return 0;
}