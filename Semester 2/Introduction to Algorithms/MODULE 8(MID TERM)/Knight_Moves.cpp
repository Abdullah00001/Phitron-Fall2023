#include <bits/stdc++.h>
using namespace std;
int N, M;
int mat[100][100];
bool isVisited[100][100];
int dis[100][100];
vector<pair<int, int>> direc = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
bool isValid(int i, int j)
{
    return !(i < 0 || i >= N || j < 0 || j >= M);
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
        for (int i = 0; i < 8; i++)
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
    int T;
    cin >> T;
    while (T--)
    {
        int Ki, Kj, Qi, Qj;
        cin >> N >> M;
        cin >> Ki >> Kj;
        cin >> Qi >> Qj;
        memset(isVisited, false, sizeof(isVisited));
        memset(dis, -1, sizeof(dis));
        bfs(Ki, Kj);
        cout << dis[Qi][Qj] << endl;
    }

    return 0;
}
algorithm mid term exam problems
1)can go
2)can go again