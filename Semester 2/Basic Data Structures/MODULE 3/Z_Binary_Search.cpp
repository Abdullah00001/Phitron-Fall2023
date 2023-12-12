#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}