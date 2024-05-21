#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        set<int> A;
        for (int i = 0; i < N; i++)
        {
            int X;
            cin >> X;
            A.insert(X);
        }
        for (auto it = A.begin(); it != A.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}