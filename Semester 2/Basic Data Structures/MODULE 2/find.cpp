#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = false;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}