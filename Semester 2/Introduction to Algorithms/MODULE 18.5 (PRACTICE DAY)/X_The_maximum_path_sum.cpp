#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll Z=1e5+5;
ll arr[Z][Z];
int myFunc(int x, int y,int n, int m)
{
    if (x == n && y == m)
        return arr[x][y];
    if (x > n || y > m)
        return 0;
    ll down = myFunc(x + 1, y, n, m);
    ll right = myFunc(x, y + 1, n, m);
    return arr[x][y] + max(down, right);
}
int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<myFunc(1,1,N,M)<<endl;
    return 0;
}