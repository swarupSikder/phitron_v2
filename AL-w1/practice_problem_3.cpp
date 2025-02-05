// author:   Swarup Sikder
// judge:    ...
// problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        // store and pop the queue
        int par = q.front();
        q.pop();

        // work with that node

        // push the childs into the queue
        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
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

    // memory set
    memset(vis, false, sizeof(vis));

    // main task
    int src = 0, dst;
    cin >> dst;
    bfs(src);

    //print
    cout<< adj_list[dst].size() <<endl;

    return 0;
}