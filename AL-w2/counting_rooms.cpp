//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
int n,m;
int countRoom;

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    else return true;
}

void dfs(int si, int sj){
    //node task
    vis[si][sj] = true;
    //cout<< si <<" "<< sj <<endl;

    //move next
    for(pair<int,int> d: dir){
        int ci = si + d.first;
        int cj = sj + d.second;

        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj]!='#'){
            dfs(ci,cj);
        }
    }
}

int main(){
    cin>> n >> m;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            cin>> grid[i][j];
        }
    }
    
    //memory set
    memset(vis, false, sizeof(vis));
    countRoom = 0;

    //call DFS
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            if(!vis[i][j] && grid[i][j] != '#'){
                dfs(i, j);
                countRoom++;
            }
        }
    }
    
    cout<< countRoom <<endl;

    return 0;
}