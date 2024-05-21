#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<int> v1(m);
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    v.insert(v.begin() + 3, v1.begin(), v1.end());
    // v.insert(v.begin() + 2, 10);
    // v.erase(v.begin() + 2);
    v.erase(v.begin() + 1, v.end());
    for (int x : v)
        cout << x << " ";
    return 0;
}