#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adjList[N];
int dis[N];
bool isVis[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    isVis[src] = true;
    dis[src] = 0;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        q.pop();
        for (int child : adjList[par])
        {
            if (!isVis[child])
            {
                isVis[child] = true;
                q.push(child);
                dis[child] = dis[par] + 1;
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
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    memset(dis, -1, sizeof(dis));
    memset(isVis, false, sizeof(isVis));
    int src, des, steps;
    cin >> src >> des >> steps;
    bfs(src);
    if (dis[des] != -1 && dis[des] <= steps * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}