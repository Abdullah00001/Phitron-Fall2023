#include <bits/stdc++.h>
#define ll long long int
#define PR pair
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
int main()
{
    int n, e;
    cin >> n >> e;
    int cntCycle = 0;
    init(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int LeaderB = find(b);
        if (leaderA == LeaderB)
            cntCycle++;
        else
            unionBySize(a, b);
    }
    cout << cntCycle << endl;
    return 0;
}