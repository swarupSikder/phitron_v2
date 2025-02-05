//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int level[100005];
int parent[100005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 1;

    while(!q.empty()) {
        //store and pop the front
        int par = q.front();
        q.pop();

        //work with that node
        

        //push the childs into the queue
        for(int child: adj_list[par]){
            if(!vis[child]) {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main(){
    int n, e;
    cin>> n >> e;

    while(e--) {
        int x, y;
        cin>> x >>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    //memory set
    memset(vis, false, sizeof(vis));
    memset(level, 0, sizeof(level));
    memset(parent, 0, sizeof(parent));

    bfs(1);

    //print
    // for(int i=1; i<=n ;i++){
    //     cout<< i << " -> " << level[i] <<endl;
    // }
    if(!vis[n]){
        cout<< "IMPOSSIBLE" <<endl;
        return 0;
    }

    cout<< level[n] <<endl;

    vector<int> route;
    int node = n;
    while(node != 0){
        route.push_back(node);
        node = parent[node];
    }
    
    reverse(route.begin(), route.end());
    for(int num: route){
        cout<< num <<" ";
    }
    cout<<endl;
    
    return 0;
}