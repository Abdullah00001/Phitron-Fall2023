#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool isVisited[1005];
int level[1005];
vector<int> levelVal;
void bfsLvl_Trav(int src)
{
    queue<int> p;
    p.push(src);
    isVisited[src] = true;
    level[src] = 0;
    while (!p.empty())
    {
        int parent = p.front();
        p.pop();
        for (int child : v[parent])
        {
            if (!isVisited[child])
            {
                p.push(child);
                isVisited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}
void printLevel(int targetLevel, int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (level[i] == targetLevel)
        {
            levelVal.push_back(i);
        }
    }

    sort(levelVal.rbegin(), levelVal.rend());
    for (int node : levelVal)
    {
        cout << node << " ";
    }
    cout << endl;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int targetLevel;
    cin >> targetLevel;
    memset(isVisited, false, sizeof(isVisited));
    memset(level, -1, sizeof(level));
    bfsLvl_Trav(0);
    printLevel(targetLevel, n);

    return 0;
}