#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e6 + 5;
ll dp[N];
ll fib(ll n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    int ans = fib(n - 1) + fib(n - 2);
    dp[n] = ans;
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    ll ans = fib(n);
    cout << ans << endl;
    return 0;
}