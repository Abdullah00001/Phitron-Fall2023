#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    return p;
}
int main()
{
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    int *x = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}