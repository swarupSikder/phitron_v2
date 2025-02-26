// author:   Swarup Sikder
// judge:    ...
// problem:  ...
#include <bits/stdc++.h>
using namespace std;
char grid[100][100];
bool vis[100][100];
int level[100][100];
pair<int,int> parent[100][100];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        // store and pop the front of the queue
        pair<int, int> par = q.front();
        int par_i = par.first;
        int par_j = par.second;
        q.pop();

        // work with that node
        //cout<< par_i <<" "<< par_j <<endl;

        // push the children
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1 ;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j]=='A'){
                si = i;
                sj = j;
            }

            if(grid[i][j]=='B'){
                di = i;
                dj = j;
            }

        }
    }

    //memory set
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si, sj);

    //shortest distance
    // for(int i=0; i<n ;i++){
    //     for(int j=0; j<m ;j++){
    //         if(vis[i][j]){
    //             grid[i][j] = 'o';
    //         }
    //     }
    // }
    int x = di, y = dj;
    cout<< x <<" "<< y <<endl;
    while(1){
        x = parent[x][y].first;
        y = parent[x][y].second;

        if(grid[x][y] == 'A'){
            break;
        }

        grid[x][y] = 'o';
    }

    //print
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            cout<< grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}


/*
input:
5 5
A....
..##.
.###.
.###.
....B
*/