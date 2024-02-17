#include <bits/stdc++.h>
#define ll long long int
#define PR pair
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int groupSize[N];
void init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}
int find(int Node)
{
    if (parent[Node] == -1)
        return Node;
    parent[Node] = find(parent[Node]);
    return parent[Node];
}
void unionBySize(int Node1, int Node2)
{
    int leader1 = find(Node1);
    int leader2 = find(Node2);
    if (groupSize[leader1] > groupSize[leader2])
    {
        parent[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}
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
bool cmp(edge a, edge b)
{
    return a.cost < b.cost;
}
int main()
{
    int n, e;
    cin >> n >> e;
    init(n);
    vector<edge> edgeList;
    while (e--)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        edgeList.push_back(edge(from, to, cost));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    ll minCost = 0;
    ll edgeCnt = 0;
    for (edge child : edgeList)
    {
        int from = find(child.from);
        int to = find(child.to);
        if (from == to)
            continue;
        else
        {
            unionBySize(from, to);
            minCost += child.cost;
            edgeCnt++;
        }
    }
    if (edgeCnt < n - 1)
        cout << -1 << endl;
    else
        cout << minCost << endl;
    return 0;
}