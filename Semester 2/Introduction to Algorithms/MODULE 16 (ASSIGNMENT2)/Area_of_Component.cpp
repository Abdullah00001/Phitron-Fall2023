#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n, m;
char mat[N][N];
bool isVis[N][N];
vector<pair<int, int>> direc = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool isValid(int childI, int childJ)
{
    return !(childI < 0 || childI >= n || childJ < 0 || childJ >= m || mat[childI][childJ] == '-');
}
int dfs(int sourceI, int sourceJ)
{
    int rooms = 0;
    isVis[sourceI][sourceJ] = true;
    for (int i = 0; i < 4; i++)
    {
        int childI = sourceI + direc[i].first;
        int childJ = sourceJ + direc[i].second;
        if (isValid(childI, childJ) && !isVis[childI][childJ] && mat[childI][childJ] == '.')
        {
            rooms += dfs(childI, childJ);
        }
    }
    return rooms + 1;
}
int main()
{
    cin >> n >> m;
    int minArea = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    memset(isVis, false, sizeof(isVis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!isVis[i][j] && mat[i][j] == '.')
            {
                int availableArea = dfs(i, j);
                minArea = min(minArea, availableArea);
            }
        }
    }
    if (minArea == INT_MAX)
        cout << -1 << endl;
    else
        cout << minArea << endl;
    return 0;
}