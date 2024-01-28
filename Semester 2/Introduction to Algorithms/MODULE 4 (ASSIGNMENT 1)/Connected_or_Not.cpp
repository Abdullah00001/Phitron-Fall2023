#include <bits/stdc++.h>
using namespace std;
int N, E;
vector<int> v[1005];
int main()
{
    cin >> N >> E;
    while (E--)
    {
        int A, B;
        cin >> A >> B;
        v[A].push_back(B);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int a, b;
        cin >> a >> b;
        bool flag = false;
        for (int val : v[a])
        {
            if (val == b)
            {
                flag = true;
                break;
            }
        }
        if (flag || a==b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}