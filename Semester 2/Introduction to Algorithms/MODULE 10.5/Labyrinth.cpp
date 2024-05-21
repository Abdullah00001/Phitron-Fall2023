#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1005;
char mat[N][N];
bool isvis[N][N];
pair<int, int> parent[N][N];
vector<pair<int, int>> direc = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
string direction;
bool isValid(int i, int j)
{
    return !(i < 0 || i >= n || j < 0 || j >= m);
}
void bfs(pair<int, int> src, pair<int, int> des)
{
    queue<pair<int, int>> p;
    p.push(src);
    isvis[src.first][src.second] = true;
    while (!p.empty())
    {
        pair<int, int> par = p.front();
        p.pop();
        for (int i = 0; i < 4; i++)
        {
            int child_I = par.first + direc[i].first;
            int child_J = par.second + direc[i].second;
            if (isValid(child_I, child_J) && !isvis[child_I][child_J])
            {
                p.push({child_I, child_J});
                isvis[child_I][child_J] = true;
                parent[child_I][child_J] = par;
            }
        }
    }
}
void path_print(pair<int, int> src, pair<int, int> dst)
{
    pair<int, int> selected_node = dst;
    while (true)
    {
        int x = selected_node.first;
        int y = selected_node.second;
        int x1 = parent[x][y].first;
        int y1 = parent[x][y].second;
        if (x > x1 && y == y1)
        {
            direction.push_back('D');
        }
        else if (x < x1 && y == y1)
        {
            direction.push_back('U');
        }
        else if (y > y1 && x == x1)
        {
            direction.push_back('R');
        }
        else if (y < y1 && x == x1)
        {
            direction.push_back('L');
        }
        if (selected_node == src)
        {
            break;
        }

        selected_node = parent[x][y];
    }
    reverse(direction.begin(), direction.end());
    cout << "YES"<<endl;
    cout << direction << endl;
}
int main()
{
    cin >> n >> m;
    pair<int, int> src, des;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
                src = {i, j};
            if (mat[i][j] == 'B')
                des = {i, j};
        }
    }
    memset(isvis, false, sizeof(isvis));
    bfs(src, des);
    if (isvis[des.first][des.second])
    {
        path_print(src, des);
    }
    else
    {
        cout << "NO"<<endl;
    }
    return 0;
}