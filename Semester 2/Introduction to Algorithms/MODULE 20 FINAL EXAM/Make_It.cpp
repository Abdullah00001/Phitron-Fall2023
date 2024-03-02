#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll n = 1e5 + 5;
ll dp[n];
bool func(ll N, ll crnt)
{
    if (crnt == N)
        return true;
    if (crnt > N || crnt > n)
        return false;
    if (dp[crnt] != -1)
        return dp[crnt];
    return dp[crnt] = func(N, crnt + 3) || func(N, crnt * 2);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        for (int i = 0; i <= N; i++)
        {
            dp[i] = -1;
        }

        if (func(N, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}