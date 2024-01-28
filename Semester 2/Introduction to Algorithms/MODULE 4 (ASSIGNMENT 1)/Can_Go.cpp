#include <bits/stdc++.h>
using namespace std;
const int n = 1005;
int N, M;
char mat[n][n];
bool isVisited[n][n];
vector<pair<int, int>> direc = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool isValid(int i, int j)
{
    return !(i < 0 || i >= N || j < 0 || j >= M);
}
void bfs(int src_i, int src_j)
{
    queue<pair<int, int>> flow;
    flow.push({src_i, src_j});
    isVisited[src_i][src_j] = true;
    while (!flow.empty())
    {
        auto par = flow.front();
        flow.pop();
        int a = par.first, b = par.second;
        for (int i = 0; i < 4; i++)
        {
            int child_i = a + direc[i].first;
            int child_j = b + direc[i].second;
            if (isValid(child_i, child_j) && !isVisited[child_i][child_j] && mat[child_i][child_j]!='#')
            {
                flow.push({child_i, child_j});
                isVisited[child_i][child_j] = true;
            }
        }
    }
}
int main()
{
    pair<int, int> src, dstn;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
                src = {i, j};
            if (mat[i][j] == 'B')
                dstn = {i, j};
        }
    }
    int source_i = src.first;
    int source_j = src.second;
    memset(isVisited, false, sizeof(isVisited));
    bfs(source_i, source_j);
    if (isVisited[dstn.first][dstn.second])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}