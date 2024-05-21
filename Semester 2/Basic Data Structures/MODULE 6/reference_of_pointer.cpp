#include <bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    *p = 20;
}
int main()
{
    int val = 10;
    int *p = &val;
    fun(p);
    cout << val << endl;
    return 0;
}