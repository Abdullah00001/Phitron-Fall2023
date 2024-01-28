#include <bits/stdc++.h>
using namespace std;
int N, E;
vector<int> mat[1005];
int main()
{
    cin >> N >> E;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X;
        cin >> X;
        vector<int> cnctedNodes;
        if (mat[X].empty())
            cout << -1 << endl;
        else
        {
            for (int val : mat[X])
            {
                cnctedNodes.push_back(val);
            }
            sort(cnctedNodes.rbegin(), cnctedNodes.rend());
            for (int expected : cnctedNodes)
            {
                cout << expected << " ";
            }
            cout << endl;
        }
    }

    return 0;
}