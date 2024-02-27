#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e3, maxW = 1e3;
int dp[maxN][maxW];
int knapsack(int n, int w, vector<int> &weight, vector<int> &value)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        int optn1 = knapsack(n - 1, w - weight[n - 1], weight, value) + value[n - 1];
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
    int n, w;
    cin >> n >> w;
    vector<int> weight(n), value(n);
    /* while (n--)
    {
        int N, W;
        cin >> N >> W;
        weight.push_back(N);
        value.push_back(W);
    } */
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapsack(n, w, weight, value) << endl;
    return 0;
}