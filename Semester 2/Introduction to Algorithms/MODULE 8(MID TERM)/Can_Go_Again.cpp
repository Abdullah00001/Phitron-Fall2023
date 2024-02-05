#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class edge
{
public:
    ll from, to, cost;
    edge(ll from, ll to, ll cost)
    {
        this->from = from;
        this->to = to;
        this->cost = cost;
    }
};
const ll INF = 1e18;
const int N = 1e5 + 5;
ll dis[N];
int main()
{
    ll n, e;
    cin >> n >> e;
    vector<edge> edgeList;
    while (e--)
    {
        ll A, B, W;
        cin >> A >> B >> W;
        edgeList.push_back(edge(A, B, W));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    ll src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (edge bf : edgeList)
        {
            ll from, to, cost;
            from = bf.from;
            to = bf.to;
            cost = bf.cost;
            if (dis[from] < INF && dis[from] + cost < dis[to])
            {
                dis[to] = dis[from] + cost;
            }
        }
    }
    bool flag = false;
    for (edge bf : edgeList)
    {
        ll from, to, cost;
        from = bf.from;
        to = bf.to;
        cost = bf.cost;
        if (dis[from] < INF && dis[from] + cost < dis[to])
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        ll T;
        cin >> T;
        while (T--)
        {
            ll D;
            cin >> D;
            if (dis[D] != INF)
                cout << dis[D] << endl;
            else
                cout << "Not Possible" << endl;
        }
    }

    return 0;
}