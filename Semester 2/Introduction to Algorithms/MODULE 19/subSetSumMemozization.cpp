#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subSetSum(int n, int w, int *arr)
{
    if (n == 0)
    {
        if (w == 0)
            return true;
        else
            return false;
    }
    if (dp[n][w] != -1)
        return dp[n][w];
    if (arr[n - 1] <= w)
    {
        bool optn1 = subSetSum(n - 1, w - arr[n - 1], arr);
        bool optn2 = subSetSum(n - 1, w, arr);
        return dp[n][w] = optn1 || optn2;
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
    if (subSetSum(n, w, arr))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}