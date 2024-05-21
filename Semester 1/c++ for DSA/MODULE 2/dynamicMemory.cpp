#include <bits/stdc++.h>
using namespace std;
int fun()
{
    int a = 100;
    return a;
}
int *fung()
{
    int *abal = new int;
    *abal = 5000;
    return abal;
}
int main()
{
    cout << fun() << endl;
    int *p = new int;
    *p = 200;
    cout << p << endl;
    cout << *p << endl;
    int *x = fung();
    cout << *x << endl;
    return 0;
}