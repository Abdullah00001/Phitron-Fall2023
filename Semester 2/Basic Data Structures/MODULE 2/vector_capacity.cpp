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
    v.push_back(100);
    cout << v.size() << endl;
    // v.clear();
    cout << v.size() << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    v.resize(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(7, 101);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}