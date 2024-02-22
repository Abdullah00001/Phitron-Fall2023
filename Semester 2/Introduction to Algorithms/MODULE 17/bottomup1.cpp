#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e6 + 5;
ll arr[N];
void fibB(int n)
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}
int main()
{
    ll n;
    cin >> n;
    // ll a[n];
    // a[0] = 0;
    // a[1] = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     a[i] = a[i - 1] + a[i - 2];
    // }
    fibB(n);
    cout << arr[n] << endl;
    return 0;
}