#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> mat[N];
bool isVis[N];
int dis[N];
int par[N];
void bfs(int src)
{
    queue<int> parent;
    parent.push(src);
    isVis[src] = true;
    dis[src] = 0;
    while (!parent.empty())
    {
        int prnt = parent.front();
        parent.pop();
        for (int child : mat[prnt])
        {
            if (!isVis[child])
            {
                isVis[child] = true;
                parent.push(child);
                dis[child] = dis[prnt] + 1;
                par[child] = prnt;
            }
        }
    }
}
int main()
{

    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    memset(isVis, false, sizeof(isVis));
    memset(dis, -1, sizeof(dis));
    memset(par, -1, sizeof(par));
    bfs(1);

    int x = n;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = par[x];
    }
    reverse(path.begin(), path.end());
    if (path.size() == 1)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        cout << path.size() << endl;
        for (int val : path)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}