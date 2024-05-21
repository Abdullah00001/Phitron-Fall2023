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
class Edge
{
public:
    int from, to, cost;
    Edge(int from, int to, int cost)
    {
        this->from = from;
        this->to = to;
        this->cost = cost;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.cost < b.cost;
}
int main()
{
    int n, e;
    cin >> n >> e;
    init(n);
    vector<Edge> edgeList;
    while (e--)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        edgeList.push_back(Edge(from, to, cost));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int total = 0;
    for (Edge child : edgeList)
    {
        int from = find(child.from);
        int to = find(child.to);
        if (from == to)
        {
            continue;
        }
        else
        {
            unionBySize(from, to);
            total += child.cost;
        }
    }
    cout << total << endl;
    return 0;
}