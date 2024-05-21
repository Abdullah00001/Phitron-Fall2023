
#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> v[1005];
bool isVis[1005];
void dfs(int srcNode)
{
    isVis[srcNode] = true;
    for (int i = 0; i < v[srcNode].size(); i++)
    {
        int child = v[srcNode][i];
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
    int srcNode;
    cin >> srcNode;
    memset(isVis, false, sizeof(isVis));
    dfs(srcNode);
    int cntVis = 0;
    for (int i = 0; i < n; i++)
    {
        if (isVis[i])
            cntVis++;
    }
    cout << cntVis << endl;
    return 0;
}