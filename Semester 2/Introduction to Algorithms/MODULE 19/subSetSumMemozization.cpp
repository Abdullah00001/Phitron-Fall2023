/********************************************
 ***************TOP_DOWN_MEMOZISED_VERSION***
 ********************************************/
#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subSum(int n, int w, int *arr)
{
    if (n == 0)
        return w == 0;
    if(dp[n][w]!=-1) return dp[n][w];
    if (arr[n - 1] <= w)
    {
        bool optn1 = subSum(n - 1, w - arr[n - 1], arr);
        bool optn2 = subSum(n - 1, w, arr);
        return dp[n][w]=optn1 || optn2;
    }
    else
        return dp[n][w]=subSum(n - 1, w, arr);
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

    return 0;
}