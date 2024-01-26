#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int cnt = 0;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int node;
    cin >> node;
    for (int i = 0; i < mat[node].size(); i++)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}