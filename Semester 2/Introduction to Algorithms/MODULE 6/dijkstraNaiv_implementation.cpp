#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<pair<int, int>> v[N];
int dis[N];
void dijkstra_imp(int src)
{
    queue<pair<int, int>> p;
    p.push({src, 0});
    dis[src] = 0;
    while (!p.empty())
    {
        auto parent = p.front();
        p.pop();
        int prnt_Node = parent.first;
        int prnt_Cost = parent.second;
        for (auto child : v[prnt_Node])
        {
            int child_node = child.first;
            int child_cost = child.second;
            if (child_cost + prnt_Cost < dis[child_node])
            {
                dis[child_node] = child_cost + prnt_Cost;
                p.push({child_node, dis[child_node]});
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
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra_imp(0);
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << " ";
    }

    return 0;
}