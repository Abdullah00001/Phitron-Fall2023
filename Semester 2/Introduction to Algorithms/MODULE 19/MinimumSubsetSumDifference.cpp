#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        w += a[i];
    }
    bool dp[n + 1][w + 1];
    dp[0][0] = true;
    for (int i = 1; i <= w; i++)
        dp[0][i] = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    /* for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    } */
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (dp[i][j] == 1)
                v.push_back(j);
        }
    }
    int ans = INT_MAX;
    for (int val : v)
    {
        int s1 = val;
        int s2 = w - s1;
        ans = min(ans,abs(s1-s2));
    }
    cout << ans << endl;
    return 0;
}