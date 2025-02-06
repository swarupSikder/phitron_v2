#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        //store and pop the front
        int par = q.front();
        q.pop();

        //work with that node

        //push the childs
        for(int child: adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

void listToMatrix(int mat[][100], int n)
{
    for(int i=0; i<n ;i++){
        for(auto n: adj_list[i]){
            mat[i][n] = 1;
        }
    }
}

int main()
{
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
    bfs(0);

    //print list
    for(int i=0; i<n ;i++){
        cout<< i <<" -> ";
        for(auto n: adj_list[i]){
            cout<< n <<" ";
        }
        cout<<endl;
    }

    //matrix task
    int mat[100][100];
    memset(mat, 0, sizeof(mat));
    listToMatrix(mat, n);

    //print matrix
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            cout<< mat[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}