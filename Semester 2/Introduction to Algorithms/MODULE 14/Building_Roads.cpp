#include <bits/stdc++.h>
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
int main()
{
    int n, m;
    cin >> n >> m;
    init(n);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int leader1 = find(a);
        int leader2 = find(b);
        if (leader1 != leader2)
            unionBySize(a, b);
    }
    vector<int> leaders;
    for (int i = 1; i <= n; i++)
    {
        leaders.push_back(find(i));
    }
    sort(leaders.begin(), leaders.end());
    leaders.erase(unique(leaders.begin(), leaders.end()), leaders.end());
    cout << leaders.size() - 1 << endl;
    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }
    return 0;
}