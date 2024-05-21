#include <bits/stdc++.h>
#define pi pair<ll, ll>
#define ll long long int
using namespace std;
const ll N = 1e5 + 5;
vector<pi> v[N];
ll dis[N];
ll par[N];
class cmp
{
public:
    bool operator()(pi a, pi b)
    {
        return a.second > b.second;
    }
};
void dijkstra(ll src)
{
    priority_queue<pi, vector<pi>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pi parent = pq.top();
        pq.pop();
        ll prntNode = parent.first;
        ll prntCost = parent.second;
        for (pi child : v[prntNode])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (prntCost + childCost < dis[childNode])
            {
                dis[childNode] = prntCost + childCost;
                pq.push({childNode, dis[childNode]});
                par[childNode] = prntNode;
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
        par[i] = -1;
    }
    dijkstra(1);
    if (dis[n] == 1e18)
        cout << -1 << endl;
    else
    {
        ll x = n;
        vector<ll> path;
        while (x != -1)
        {
            path.push_back(x);
            x = par[x];
        }
        reverse(path.begin(), path.end());
        for (ll val : path)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}