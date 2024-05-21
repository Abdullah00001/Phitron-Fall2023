#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool isvis[1005];
int level[1005];
int path[1005];
void bfstrav(int src)
{
    queue<int> p;
    p.push(src);
    isvis[src] = true;
    level[src] = 0;
    while (!p.empty())
    {
        int par = p.front();
        p.pop();
        for (int child : v[par])
        {
            if (!isvis[child])
            {
                p.push(child);
                isvis[child] = true;
                level[child] = level[par] + 1;
                path[child] = par;
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
    memset(isvis, false, sizeof(isvis));
    memset(level, -1, sizeof(level));
    memset(path, -1, sizeof(path));
    bfstrav(src);
    vector<int> sortestPath;
    int x = des;
    while (x != -1)
    {
        sortestPath.push_back(x);
        x = path[x];
    }
    reverse(sortestPath.begin(), sortestPath.end());
    for (int val : sortestPath)
    {
        cout << val << endl;
    }

    return 0;
}