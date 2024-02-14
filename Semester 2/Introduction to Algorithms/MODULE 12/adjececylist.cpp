#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adjList[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back({b});
        adjList[b].push_back({a});
    }
    int b;
    cin >> b;
    for (int i = 0; i < adjList[b].size(); i++)
    {
        for (int j = 0; j < adjList[b][0].size(); j++)
        {
            cout << adjList[b][i][j] << endl;
        }
    }

    return 0;
}