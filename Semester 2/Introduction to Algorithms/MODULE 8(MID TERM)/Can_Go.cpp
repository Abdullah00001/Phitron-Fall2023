#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5+5;
const ll INF = 1e18;
vector<pair<ll, ll>> v[N];
ll dis[N];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra_imp(int src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> p;
    p.push({src, 0});
    dis[src] = 0;
    while (!p.empty())
    {
        auto parent = p.top();
        p.pop();
        ll prnt_Node = parent.first;
        ll prnt_Cost = parent.second;
        for (auto child : v[prnt_Node])
        {
            ll child_node = child.first;
            ll child_cost = child.second;
            if (dis[child_node] > prnt_Cost + child_cost)
            {
                dis[child_node] = prnt_Cost + child_cost;
                p.push({child_node, dis[child_node]});
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
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    ll source;
    cin >> source;
    dijkstra_imp(source);
    ll t;
    cin >> t;
    while (t--)
    {
        ll D, DW;
        cin >> D >> DW;
        if (dis[D] <= DW)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}