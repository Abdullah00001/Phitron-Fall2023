#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF = 1e18;
int main()
{
    ll N, E;
    cin >> N >> E;
    ll adjMat[N+1][N+1];
    for (ll i = 1; i <= N; i++)
    {
        for (ll j = 1; j <= N; j++)
        {
            adjMat[i][j] = INF;
            if (i == j)
                adjMat[i][j] = 0;
        }
    }
    while (E--)
    {
        ll A, B, W;
        cin >> A >> B >> W;
        adjMat[A][B] = min(adjMat[A][B], W);
    }
    for (ll h = 1; h <= N; h++)
    {
        for (ll i = 1; i <= N; i++)
        {
            for (ll j = 1; j <= N; j++)
            {
                if (adjMat[i][h] + adjMat[h][j] < adjMat[i][j])
                {
                    adjMat[i][j] = adjMat[i][h] + adjMat[h][j];
                }
            }
        }
    }
    ll Q;
    cin >> Q;
    while (Q--)
    {
        ll X, Y;
        cin >> X >> Y;
        if (adjMat[X][Y] == INF)
            cout << "-1" << endl;
        else
        {
            cout << adjMat[X][Y] << endl;
        }
    }

    return 0;
}