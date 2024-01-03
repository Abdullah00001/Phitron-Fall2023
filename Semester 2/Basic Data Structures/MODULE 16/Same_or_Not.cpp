#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    stack<int> A;
    queue<int> B;
    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;
        A.push(V);
    }
    for (int i = 0; i < M; i++)
    {
        int V;
        cin >> V;
        B.push(V);
    }
    if (A.size() != B.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = false;
        while (!A.empty() && !B.empty())
        {
            if (A.top() != B.front())
            {
                flag = true;
                break;
            }
            A.pop();
            B.pop();
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}