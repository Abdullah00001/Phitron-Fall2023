#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adjMat[N];
bool isvis[N];
bool pathVis[N];
bool ans;
void dfs(int src)
{
    isvis[src] = true;
    pathVis[src] = true;
    for (int child : adjMat[src])
    {
        if (pathVis[child])
            ans = true;
        if (!isvis[child])
        {
            dfs(child);
        }
    }
    pathVis[src] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        a[adjMat].push_back(b);
    }
    memset(isvis, false, sizeof(isvis));
    memset(pathVis, false, sizeof(pathVis));

    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!isvis[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "Found The BUG" << endl;
    else
        cout << "NOT FOUND - Sorry" << endl;
    return 0;
}