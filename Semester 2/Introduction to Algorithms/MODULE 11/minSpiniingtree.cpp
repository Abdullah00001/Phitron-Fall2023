#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int groupSize[N];
void init(int n)
{
    for (int i = 0; i < n; i++)
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
    if (groupSize[Node1] > groupSize[Node2])
    {
        parent[Node2] = Node1;
        groupSize[Node1] += groupSize[Node2];
    }
    else
    {
        parent[Node1] = Node2;
        groupSize[Node2] += groupSize[Node1];
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
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(edge(u, v, c));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int total = 0;
    for (edge a : edgeList)
    {
        int from = find(a.from);
        int to = find(a.to);
        if (from == to)
        {
            continue;
        }
        else
        {
            unionBySize(from, to);
            total += a.cost;
        }
    }
    cout << total << endl;
    return 0;
}