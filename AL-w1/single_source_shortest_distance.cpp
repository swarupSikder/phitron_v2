// author:   Swarup Sikder
// judge:    ...
// problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        // store and pop the front of the queue
        int par = q.front();
        q.pop();

        // work with that node
        // cout<< par <<" ";

        // push the children
        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
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

        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int src, dst;
    cin >> src >> dst;
    bfs(src);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " " << level[i] << endl;
    // }

    cout << level[dst] << endl;

    return 0;
}