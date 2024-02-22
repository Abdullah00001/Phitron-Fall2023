#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int ans = 0;
    if(n==0||n==1) return n;
    for (int i = 0; i < n; i++)
    {
        ans = i + i + 1;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = fib(n);
    cout << ans << endl;
    return 0;
}