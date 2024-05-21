#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> v[1005];
bool isVis[1005];
void dfs(int src)
{
    isVis[src] = true;
    for (int child : v[src])
    {
        if (!isVis[child])
            dfs(child);
    }
}
int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(isVis, false, sizeof(isVis));
    int cntComponents = 0;
    for (int i = 0; i < n; i++)
    {
        if (!isVis[i])
        {
            dfs(i);
            cntComponents++;
        }
    }
    cout << cntComponents << endl;
    return 0;
}