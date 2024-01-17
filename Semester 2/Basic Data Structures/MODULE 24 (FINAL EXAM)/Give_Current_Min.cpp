#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> A;
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        A.push(X);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int val;
            cin >> val;
            A.push(val);
            cout << A.top() << endl;
        }
        else if (cmd == 1)
        {
            if (A.empty())
                cout << "Empty" << endl;
            else
                cout << A.top() << endl;
        }
        else if (cmd == 2)
        {
            if (A.empty())
                cout << "Empty" << endl;
            else
            {
                A.pop();
                if (A.empty())
                    cout << "Empty" << endl;

                else
                    cout << A.top() << endl;
            }
        }
    }

    return 0;
}