#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool isVis[1005];
int level[1005];
void bfsTrav(int src)
{
    queue<int> p;
    p.push(src);
    isVis[src] = true;
    level[src] = 0;
    while (!p.empty())
    {
        int parent = p.front();
        p.pop();
        for (int child : v[parent])
        {
            if (!isVis[child])
            {
                p.push(child);
                isVis[child] = true;
                level[child] = level[parent] + 1;
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
    memset(isVis, false, 1005);
    memset(level, -1, 1005);
    int src;
    cin >> src;
    bfsTrav(src);
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << level[i] << endl;
    }

    return 0;
}