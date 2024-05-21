#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    vector<pair<int, int>> p;
    while (E--)
    {
        int A, B;
        cin >> A >> B;
        p.push_back({A, B});
    }
    // for (int i = 0; i < p.size(); i++)
    // {
    //     cout << p[i].first << " " << p[i].second << endl;
    // }
    // for (pair<int, int> x : p)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    for (auto x : p)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}