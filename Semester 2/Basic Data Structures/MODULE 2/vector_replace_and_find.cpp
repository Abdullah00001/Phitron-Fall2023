#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // replace(v.begin(), v.end(), 67, 40);
    // for (int x : v)
    //     cout << x << " ";
    // cout << endl;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    auto it = find(v.begin(), v.end(), m);
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    return 0;
}