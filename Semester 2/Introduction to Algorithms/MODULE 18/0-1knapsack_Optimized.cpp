#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e3;
const int maxW = 1e3;
int dp[maxN][maxW];
int knapsack(int n, int w, int *weight, int *value)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        int optn1 = knapsack(n - 1, w - weight[n - 1], weight, value)+value[n-1];
        int optn2 = knapsack(n - 1, w, weight, value);
        return dp[n][w] = max(optn1, optn2);
    }
    else
    {
        return dp[n][w] = knapsack(n - 1, w, weight, value);
    }
}
int main()
{
    int N, W;
    cin >> N >> W;
    int weight[N], value[N];
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i];
        // cin >> value[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> value[i];
    }
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapsack(N, W, weight, value) << endl;
    return 0;
}