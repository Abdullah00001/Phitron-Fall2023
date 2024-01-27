#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> v[N];
bool isVisite[N];
void dfs(int src)
{
    cout << src << endl;
    isVisite[src] = true;
    for (int child : v[src])
    {
        if (!isVisite[child])
        {
            dfs(child);
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
    memset(isVisite, false, sizeof(isVisite));
    dfs(0);
    return 0;
}