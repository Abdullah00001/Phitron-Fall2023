#include <bits/stdc++.h>
using namespace std;
int *fun(int val)
{
    int *p = new int;
    *p = val;
    return p;
}
int main()
{
    int a;
    cin >> a;
    int *b = fun(a);
    cout << *b << endl;
    return 0;
}