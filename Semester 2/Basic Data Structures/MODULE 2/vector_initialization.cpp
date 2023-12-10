#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // vector<int> v;
    // vector<int> v(n);
    // cout<<v.size()<<endl;
    // int m;
    // cin >> m;
    // vector<int> v(n, m);
    // vector<int>v1(v);
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> v1(v, v + n);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << v1.size() << endl;
    return 0;
}