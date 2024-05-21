#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int from, to, cost;
    edge(int from, int to, int cost)
    {
        this->from = from;
        this->to = to;
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
        int from, to, cost;
        cin >> from >> to >> cost;
        edgeList.push_back(edge(from, to, cost));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (edge bf : edgeList)
        {
            int from, to, cost;
            from = bf.from;
            to = bf.to;
            cost = bf.cost;
            if (dis[from] < INT_MAX && dis[from] + cost < dis[to])
            {
                dis[to] = dis[from] + cost;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}