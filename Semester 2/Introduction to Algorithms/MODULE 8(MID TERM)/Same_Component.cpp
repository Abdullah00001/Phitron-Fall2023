#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int n, m;
char mat[N][N];
bool isVisited[N][N];
vector<pair<int, int>> direction = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool isValid(int i, int j)
{
    return !(i < 0 || i >= n || j < 0 || j >= m);
}
void dfs(int src_i, int src_j)
{
    isVisited[src_i][src_j] = true;
    for (int i = 0; i < 4; i++)
    {
        int child_i = src_i + direction[i].first;
        int child_j = src_j + direction[i].second;
        if (isValid(child_i, child_j) && mat[child_i][child_j] == '.' && !isVisited[child_i][child_j])
        {
            dfs(child_i, child_j);
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int Si, Sj, Di, Dj;

    cin >> Si >> Sj;
    cin >> Di >> Dj;
    memset(isVisited, false, sizeof(isVisited));
    dfs(Si, Sj);
    if (isVisited[Di][Dj])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}