#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 50;
char mat[N][N];
bool isvis[N][N];
ll dis[N][N];
class point
{
public:
    ll x, y;
};
vector<pair<ll, ll>> direction = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
bool isvalid(ll x, ll y, ll n)
{
    return (x >= 0 && x < n && y >= 0 && y < n && !isvis[x][y] && mat[x][y] != 'T');
}
ll bfs(point start, point end, ll n)
{
    queue<pair<point, ll>> parent;
    parent.push({start, 0});
    isvis[start.x][start.y] = true;
    while (!parent.empty())
    {
        point cur = parent.front().first;
        ll dis = parent.front().second;
        parent.pop();
        if (cur.x == end.x && cur.y == end.y)
            return dis;
        for (ll i = 0; i < 4; i++)
        {
            ll childX = cur.x + direction[i].first;
            ll childY = cur.y + direction[i].second;
            if (isvalid(childX, childY, n))
            {
                parent.push({{childX, childY}, dis + 1});
                isvis[childX][childY]=true;
            }
        }
    }
    return -1;
}
int main()
{
    ll n;
    while (cin >> n)
    {
        point start, end;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 'S')
                {
                    start.x = i;
                    start.y = j;
                }
                if (mat[i][j] == 'E')
                {
                    end.x = i;
                    end.y = j;
                }
            }
        }
        memset(isvis, false, sizeof(isvis));
        ll minSteps = bfs(start, end, n);
        cout << minSteps << endl;
    }

    return 0;
}
