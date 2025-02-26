//author:   Swarup Sikder
//judge:    HackerRank
//problem:  Maze
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
pair<int,int> parent[1005][1005];
int n,m;
//--------------------------{right},{left},{up},{down}
vector<pair<int,int>> dir = {{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int i, int j){
    return !(i<0 || i>=n || j<0 || j>=m);
}

void printGrid(){
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            cout<< grid[i][j];
        }
        cout<<endl;
    }
}

void bfs(int si, int sj){
    //source task
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    
    //loop inside
    while(!q.empty()){
        //store and pop the front
        auto par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;

        //push the childs
        for(auto d: dir){
            int ci = pi + d.first;
            int cj = pj + d.second;

            if(valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D')){
                vis[ci][cj] = true;
                parent[ci][cj] = {pi, pj};
                q.push({ci, cj});
            }
        }
    }

}

int main(){
    //input
    cin>> n >> m;

    int si,sj,di,dj;

    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            cin>> grid[i][j];

            if(grid[i][j] == 'R'){
                si = i;
                sj = j;
            }

            if(grid[i][j] == 'D'){
                di = i;
                dj = j;
            }
        }
    }

    //memory set
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    //call BFS
    bfs(si, sj);

    //check edge
    if (!vis[di][dj]) {
        printGrid();
        return 0;
    }

    //modify grid
    int x = di;
    int y = dj;

    while(1){
        pair<int, int> par = parent[x][y];
        x = par.first;
        y = par.second;


        if(grid[x][y] == 'R'){
            break;
        }

        grid[x][y] = 'X';
    }

    

    //print grid
    printGrid();
    
    return 0;
}