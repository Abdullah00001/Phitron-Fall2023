#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adjMAt[N];
bool isvis[N];
int parentArray[N];
bool ans;
void dfs(int source)
{
    isvis[source] = true;
    for (int child : adjMAt[source])
    {
        if (isvis[child] && parentArray[source] != child)
        {
            ans = true;
        }
        if (!isvis[child])
        {
            parentArray[child] = source;
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    ans = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjMAt[a].push_back(b);
        adjMAt[b].push_back(a);
    }
    memset(isvis, false, sizeof(isvis));
    memset(parentArray, -1, sizeof(parentArray));
    for (int i = 0; i < n; i++)
    {
        if (!isvis[i]) 
            dfs(i);
    }
    if (ans)
        cout << "!found" << endl;
    else
        cout << "Not Found . . . !" << endl;
    return 0;
}