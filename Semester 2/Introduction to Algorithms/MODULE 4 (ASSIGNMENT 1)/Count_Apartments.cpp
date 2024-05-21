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
void dfs(int source_i, int source_j)
{
    isVisited[source_i][source_j] = true;
    for (int i = 0; i < 4; i++)
    {
        int child_i = source_i + direc[i].first;
        int child_j = source_j + direc[i].second;
        if (isValid(child_i, child_j) && !isVisited[child_i][child_j] && mat[child_i][child_j] == '.')
        {
            dfs(child_i, child_j);
        }
    }
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
        }
    }
    memset(isVisited, false, sizeof(isVisited));
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!isVisited[i][j] && mat[i][j] == '.')
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}