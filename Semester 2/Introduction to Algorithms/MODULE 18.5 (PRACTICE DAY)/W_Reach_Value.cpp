/* #include <bits/stdc++.h>
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
} */
#include <iostream>
using namespace std;

const long long p = 1e12 + 5;

bool knapsack(long long n, long long current) {
    if (current == n) {
        return true;
    }
    if (current > n || current > p) {
        return false;
    }

    return knapsack(n, current * 10) || knapsack(n, current * 20);
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        long long n;
        cin >> n;


        if (knapsack(n, 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

return 0;
}