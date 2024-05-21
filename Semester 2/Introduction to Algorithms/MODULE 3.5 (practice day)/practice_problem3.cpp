#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> v[1005];
bool isVis[1005];
void dfs(int src, int &cnt)
{
    isVis[src] = true;
    cnt++;
    for (int child : v[src])
    {
        if (!isVis[child])
            dfs(child, cnt);
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
    vector<int> cmpntS;
    memset(isVis, false, sizeof(isVis));
    for (int i = 0; i < n; i++)
    {
        if (!isVis[i])
        {
            int cnt = 0;
            dfs(i, cnt);
            cmpntS.push_back(cnt);
        }
    }
    sort(cmpntS.begin(), cmpntS.end());
    for (int size : cmpntS)
    {
        cout << size << " ";
    }
    cout << endl;
    return 0;
}