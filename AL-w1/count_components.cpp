// author:   Swarup Sikder
// judge:    ...
// problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[1005];
bool vis[1005];

void dfs(int src)
{
    // base case
    // no base case needed
    // already checked by vis[]

    // print
    //cout << src << " ";
    vis[src] = true;

    // childs
    for (int child : adjList[src])
    {
        if (!vis[child])
            dfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

    // memory set
    memset(vis, false, sizeof(vis));
    int cnt = 0;

    // call dfs
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            //cout << endl;
            cnt++;
        }
    }

    cout<< cnt <<endl;

    return 0;
}