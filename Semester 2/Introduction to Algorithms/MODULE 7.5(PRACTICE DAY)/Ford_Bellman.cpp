#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int u, v, cost;
    edge(int u, int v, int cost)
    {
        this->u = u;
        this->v = v;
        this->cost = cost;
    }
};
const int N = 1e5 + 5;
const int INF = INT_MAX;
int dis[N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> edgeList;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }

    dis[1] = 0;
    while (e--)
    {
        int u, v, cost;
        cin >> u >> v >> cost;
        edgeList.push_back(edge(u, v, cost));
    }

    for (int i = 1; i < n; i++)
    {
        for (edge child : edgeList)
        {
            int u, v, cost;
            u = child.u;
            v = child.v;
            cost = child.cost;
            if (dis[u] < INF && dis[u] + cost < dis[v])
            {
                dis[v] = dis[u] + cost;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INF)
        {
            cout << 30000 << " ";
        }
        else
            cout << dis[i] << " ";
    }
    cout << endl;
    return 0;
}