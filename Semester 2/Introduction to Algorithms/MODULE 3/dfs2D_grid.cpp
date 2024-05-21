#include <bits/stdc++.h>
using namespace std;
int r, c;
char mat[20][20];
bool isVisited[20][20];
vector<pair<int, int>> d = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool isValid(int i, int j)
{
    return !(i < 0 || i >= r || j < 0 || j >= c);
}
void dfs(int source_i, int source_j)
{
    cout << source_i << " " << source_j << endl;
    isVisited[source_i][source_j] = true;
    for (int i = 0; i < 4; i++)
    {
        int child_i = source_i + d[i].first;
        int child_j = source_j + d[i].second;
        if (isValid(child_i, child_j) && !isVisited[child_i][child_j])
        {
            dfs(child_i, child_j);
        }
    }
}
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    int src_i, src_j;
    cin >> src_i >> src_j;
    memset(isVisited, false, sizeof(isVisited));
    dfs(src_i, src_j);
    return 0;
}