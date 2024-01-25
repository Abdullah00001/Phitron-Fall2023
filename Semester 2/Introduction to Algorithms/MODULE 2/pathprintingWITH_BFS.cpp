#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool isVis[1005];
int level[1005];
int parent[1005];
void bfsTrav(int src)
{
    queue<int> p;
    p.push(src);
    isVis[src] = true;
    level[src] = 0;
    while (!p.empty())
    {
        int par = p.front();
        p.pop();
        for (int child : v[par])
        {
            if (!isVis[child])
            {
                p.push(child);
                isVis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
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
    int src, des;
    cin >> src >> des;
    memset(isVis, false, sizeof(isVis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfsTrav(src);
    int x = des;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());
    for (int c : path)
    {
        cout << c << endl;
    }

    return 0;
}
