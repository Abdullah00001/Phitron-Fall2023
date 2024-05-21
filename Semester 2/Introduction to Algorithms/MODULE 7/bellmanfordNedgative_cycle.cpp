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
        for (edge child : edgeList)
        {
            int from, to, cost;
            from = child.from;
            to = child.to;
            cost = child.cost;
            if (dis[from] < INT_MAX && dis[from] + cost < dis[to])
            {
                dis[to] = dis[from] + cost;
            }
        }
    }
    bool flag = false;
    for (edge child : edgeList)
    {
        int from, to, cost;
        from = child.from;
        to = child.to;
        cost = child.cost;
        if (dis[from] < INT_MAX && dis[from] + cost < dis[to])
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "THERE IS CYCLE" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }
    return 0;
}