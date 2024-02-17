#include <bits/stdc++.h>
#define ll long long int
#define PR pair<ll, ll>
using namespace std;
const ll N = 1e3 + 5;
int n, m;
PR source, dest;
char mat[N][N];
bool isVis[N][N];
pair<int, int> path[N][N];
vector<PR> direc = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool isValid(int x, int y)
{
    return mat[x][y] != '#' && (x >= 0 && x < n && y >= 0 && y < m);
}

void bfs()
{
    queue<PR> q;
    q.push({source.first, source.second});
    isVis[source.first][source.second] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (auto mv : direc)
        {
            int childX = x + mv.first;
            int childY = y + mv.second;
            if (isValid(childX, childY) && !isVis[childX][childY])
            {
                isVis[childX][childY] = true;
                path[childX][childY] = {mv.first, mv.second};
                q.push({childX, childY});
            }
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
            if (mat[i][j] == 'R')
            {
                source.first = i;
                source.second = j;
            }
            if (mat[i][j] == 'D')
            {
                dest.first = i;
                dest.second = j;
            }
        }
    }
    bfs();
    vector<PR> ans;
    PR newDest=dest;
    if (isVis[dest.first][dest.second])
    {
        while (dest.first != source.first || dest.second != source.second)
        {
            mat[dest.first][dest.second] = 'X';
            ans.push_back({path[dest.first][dest.second]});
            dest.first -= ans.back().first;
            dest.second -= ans.back().second;
        }
        mat[source.first][source.second]='R';
        mat[newDest.first][newDest.second]='D';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}