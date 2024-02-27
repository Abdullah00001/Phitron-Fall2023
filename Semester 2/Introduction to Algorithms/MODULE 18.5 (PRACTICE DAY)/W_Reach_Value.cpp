#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll n = 1e12 + 5;
bool func(ll N, ll crnt)
{
    if (crnt == N)
        return true;
    if (crnt > N || crnt > n)
        return false;
    return func(N, crnt * 10) || func(N, crnt * 20);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        if (func(N, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}