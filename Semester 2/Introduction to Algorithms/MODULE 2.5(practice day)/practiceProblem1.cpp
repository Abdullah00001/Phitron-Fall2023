#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool isVisited[1005];
int path[1005];
void bfs_Trav(int src)
{
    queue<int> p;
    p.push(src);
    isVisited[src] = true;
    while (!p.empty())
    {
        int par = p.front();
        p.pop();
        for (int child : v[par])
        {
            if (!isVisited[child])
            {
                p.push(child);
                isVisited[child] = true;
                path[child] = par;
            }
        }
    }
}
void sortestDes(int des)
{
    int cnt = 0;
    int x = des;
    while (x != -1)
    {
        cnt++;
        x = path[x];
    }
    cout << cnt - 1 << endl;
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
    int query;
    cin >> query;
    while (query--)
    {
        int src, des;
        cin >> src >> des;

        memset(isVisited, false, sizeof(isVisited));
        memset(path, -1, sizeof(path));
        bfs_Trav(src);
        if (isVisited[des] == false)
        {
            cout << -1 << endl;
        }
        else
            sortestDes(des);
    }

    return 0;
}