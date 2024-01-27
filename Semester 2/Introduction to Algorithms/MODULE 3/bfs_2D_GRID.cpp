#include <bits/stdc++.h>
using namespace std;
int r, c;
char mat[20][20];
bool isVisited[20][20];
int dis[20][20];
vector<pair<int, int>> direc = {{0, 1}, {-1, 0}, {1, 0}, {0, -1}};
bool isValid(int i, int j)
{
    return !(i < 0 || i >= r || j < 0 || j >= c);
}
void bfs(int source_i, int source_j)
{
    queue<pair<int, int>> flow;
    flow.push({source_i, source_j});
    isVisited[source_i][source_j] = true;
    dis[source_i][source_j] = 0;
    while (!flow.empty())
    {
        pair<int, int> par = flow.front();
        flow.pop();
        int a = par.first, b = par.second;
        for (int i = 0; i < 4; i++)
        {
            int child_i = a + direc[i].first;
            int child_j = b + direc[i].second;
            if (isValid(child_i, child_j) && !isVisited[child_i][child_j])
            {
                flow.push({child_i, child_j});
                isVisited[child_i][child_j] = true;
                dis[child_i][child_j] = dis[a][b] + 1;
            }
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
    memset(dis, -1, sizeof(dis));
    bfs(src_i, src_j);
    cout << dis[2][3];
    return 0;
}