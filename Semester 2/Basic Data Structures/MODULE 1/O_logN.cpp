#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    /* while (n > 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        n /= 10;
    } */
    // for (int i = 1; i <= n; i *= 2)
    // {
    //     int digit = n % 10;
    //     cout << digit << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "HELLO" << endl;
        }
    }

    return 0;
}