#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adjMAt[N];
bool isvis[N];
bool ans;
int parentArray[N];
void bfs(int src)
{
    queue<int> v;
    v.push(src);
    isvis[src] = true;
    while (!v.empty())
    {
        int parent = v.front();
        v.pop();
        for (int child : adjMAt[parent])
        {
            if (isvis[child] && parentArray[parent] != child)
            {
                ans = true;
            }
            if (!isvis[child])
            {
                isvis[child] = true;
                v.push(child);
                parentArray[child] = parent;
            }
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
        {
            bfs(i);
        }
    }
    if (ans)
        cout << "Found!" << endl;
    else
        cout << "Not Found!" << endl;
    return 0;
}