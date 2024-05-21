#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int, int>>> adjList;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adjList[a].push_back({b, c});
    }
    int b;
    cin >> b;
    for (int i = 0; i < adjList[b].size(); i++)
    {
        cout << adjList[b][i].first << " " << adjList[b][i].second << endl;
    }

    return 0;
}