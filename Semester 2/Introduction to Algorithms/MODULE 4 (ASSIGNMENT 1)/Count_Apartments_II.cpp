#include <bits/stdc++.h>
using namespace std;
const int n = 1005;
int N, M;
char mat[n][n];
bool isVisited[n][n];
vector<pair<int, int>> direc = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool isValid(int i, int j)
{
    return !(i < 0 || i >= N || j < 0 || j >= M || mat[i][j] == '#');
}
int dfs(int source_i, int source_j)
{
    int rooms = 0;
    isVisited[source_i][source_j] = true;
    for (int i = 0; i < 4; i++)
    {
        int child_i = source_i + direc[i].first;
        int child_j = source_j + direc[i].second;
        if (isValid(child_i, child_j) && !isVisited[child_i][child_j] && mat[child_i][child_j] == '.')
        {
            rooms += dfs(child_i, child_j);
        }
    }
    return rooms + 1;
}
int main()
{
    cin >> N >> M;
    vector<int> apartments;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
        }
    }
    memset(isVisited, false, sizeof(isVisited));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

            if (!isVisited[i][j] && mat[i][j] == '.')
            {
                apartments.push_back(dfs(i, j));
            }
        }
    }
    if (apartments.empty())
        cout << 0 << endl;
    else
    {
        sort(apartments.begin(), apartments.end());
        for (int cnt : apartments)
        {
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}