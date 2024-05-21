#include <bits/stdc++.h>
using namespace std;
int *fun(int n)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    return p;
}
int main()
{
    int n;
    cin >> n;
    int *p = fun(n);
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";
    cout << endl;

    return 0;
}