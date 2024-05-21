#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int subSetSum(int n, int w, int *arr)
{
    if (n == 0)
    {
        if (w == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][w] != -1)
        return dp[n][w];
    if (arr[n - 1] <= w)
    {
        int optn1 = subSetSum(n - 1, w - arr[n - 1], arr);
        int optn2 = subSetSum(n - 1, w, arr);
        return dp[n][w] = optn1 + optn2;
    }
    else
        return dp[n][w] = subSetSum(n - 1, w, arr);
}
int main()
{
    int n, w;
    cin >> n >> w;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    /* if (subSetSum(n, w, arr))
        cout << "YES" << endl;
    else
        cout << "NO" << endl; */
    cout << subSetSum(n, w, arr) << endl;
    return 0;
}