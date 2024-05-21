#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adjMat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adjMat[i][j] = INT_MAX;
            if (i == j)
                adjMat[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adjMat[a][b] = c;
    }
    for (int h = 0; h < n; h++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adjMat[i][h] + adjMat[h][j] < adjMat[i][j])
                {
                    adjMat[i][j] = adjMat[i][h] + adjMat[h][j];
                }
            }
        }
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (adjMat[i][i] < 0)
            flag = true;
    }
    if (flag)
        cout << "cycle Found!" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adjMat[i][j] == INT_MAX)
                    cout << "INF ";
                else
                    cout << adjMat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}