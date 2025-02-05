//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int level[100005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        //store and pop the queue
        int par = q.front();
        q.pop();

        //work with that node

        //push the childs into the queue
        for(int child: adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
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

    

    //query part
    int q;
    cin>> q;
    while(q--){
        //memory set
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        //main task
        int src, dst;
        cin>> src >> dst;
        bfs(src);

        cout<< level[dst] <<endl;
    }

    
    return 0;
}