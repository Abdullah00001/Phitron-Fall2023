#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i *= 2)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i *= 2)
    {
        cout << a[i] << " ";
    }

    return 0;
}