#include <bits/stdc++.h>
using namespace std;
const int N = 30;
int n, m;
pair<int, int> src;
char mat[N][N];
bool isvis[N][N];
int cnt;
vector<pair<int, int>> direc = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool isvalid(int childX, int childY)
{
    return (childX >= 0 && childX < m && childY >= 0 && childY < n);
}
void dfs(int srcI, int srcJ)
{
    isvis[srcI][srcJ] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int childI = srcI + direc[i].first;
        int childJ = srcJ + direc[i].second;
        if (isvalid(childI, childJ)&& !isvis[childI][childJ] && mat[childI][childJ] == '.')
        {
            dfs(childI, childJ);
        }
    }
}
int main()
{
    int T;
    cin >> T;
    int cs = 1;
    while (T--)
    {
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == '@')
                {
                    src.first = i;
                    src.second = j;
                }
            }
        }
        cnt = 0;
        memset(isvis, false, sizeof(isvis));
        dfs(src.first, src.second);
        cout << "Case " << cs++ << ": " << cnt << endl;
    }
    return 0;
}