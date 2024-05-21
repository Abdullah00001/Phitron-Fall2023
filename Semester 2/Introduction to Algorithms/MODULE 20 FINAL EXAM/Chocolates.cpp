#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, W = 0;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            W += A[i];
        }
        if (W % 2 == 0)
        {
            int sum = W / 2;
            bool dp[N + 1][sum + 1];
            dp[0][0] = true;
            for (int i = 1; i <= sum; i++)
                dp[0][i] = false;
            for (int i = 1; i <= N; i++)
            {
                for (int j = 0; j <= sum; j++)
                {
                    if (A[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - A[i - 1]] || dp[i - 1][j];
                    }
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }
            if (dp[N][sum])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}