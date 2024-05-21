#include <bits/stdc++.h>
using namespace std;
int n, m;
char mat[20][20];
bool isVisite[20][20];
vector<pair<int, int>> c = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool isValid(int i, int j)
{
    return !(i < 0 || i >= n || j < 0 || j >= m);
}
void dfs(int source_i, int source_j)
{
    cout << source_i << " " << source_j << endl;
    isVisite[source_i][source_j] = true;
    for (int i = 0; i < 4; i++)
    {
        int child_i = source_i + c[i].first;
        int child_j = source_j + c[i].second;
        if (isValid(child_i, child_j) && !isVisite[child_i][child_j])
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
    int src_i, src_j;
    cin >> src_i >> src_j;
    memset(isVisite, false, sizeof(isVisite));
    dfs(src_i, src_j);
    return 0;
}