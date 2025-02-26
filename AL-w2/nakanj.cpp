// author:   Swarup Sikder
// judge:    ...
// problem:  ...
#include <bits/stdc++.h>
using namespace std;
char grid[8][8];
bool vis[8][8];
int level[8][8];
vector<pair<int, int>> d = {{2,-1},{2,1},{-2,-1},{-2,1},{1,2},{1,-2},{-1,-2},{-1,2}};
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
        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (!vis[ci][cj] && valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1 ;
            }
        }
    }
}

void body(){
    n=8, m=8;
    string src, dst;
    cin>> src >> dst;

    int si = src[1] - '1';
    int sj = src[0] - 'a';

    int di = dst[1] - '1';
    int dj = dst[0] - 'a';


    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si, sj);

    //shortest distance
    cout<< level[di][dj] <<endl;
}

int main()
{
    int t;
    cin>> t;
    while(t--){
        body();
    }
    return 0;
}