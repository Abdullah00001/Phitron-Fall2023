#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int w, int *weight, int *value)
{
    if (n == 0 || w == 0)
        return 0;
    if (weight[n] <= w)
    {
        int optn1 = knapsack(n - 1, w - weight[n], weight, value)+value[n];
        int optn2 = knapsack(n - 1, w, weight, value);
        return max(optn1, optn2);
    }
    {
        return knapsack(n - 1, w, weight, value);
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
        cin >> value[i];
    }
    cout << knapsack(N - 1, W, weight, value) << endl;
    return 0;
}