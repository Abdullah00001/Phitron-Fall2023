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
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> edgeList;
    while (e--)
    {
        int u, v, cost;
        cin >> u >> v >> cost;
        edgeList.push_back(edge(u, v, cost));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (edge ed : edgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.cost;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << dis[i] << endl;
    }

    return 0;
}