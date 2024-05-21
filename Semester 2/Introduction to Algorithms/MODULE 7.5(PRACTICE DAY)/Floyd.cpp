#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll adjMat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adjMat[i][j];
            if (adjMat[i][j] == -1)
                adjMat[i][j] = INT_MAX;
        }
    }
    for (int h = 0; h < n; h++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && i != h && j != h && adjMat[i][h] != INT_MAX && adjMat[h][j] != INT_MAX && (adjMat[i][h] + adjMat[h][j] < adjMat[i][j]))
                {
                    adjMat[i][j] = adjMat[i][h] + adjMat[h][j];
                }
            }
        }
    }
    long long mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adjMat[i][j] != INT_MAX && adjMat[i][j] > mx)
                mx = adjMat[i][j];
        }
    }
    if (mx == INT_MAX)
        mx = 0;
    cout << mx << endl;
    return 0;
}