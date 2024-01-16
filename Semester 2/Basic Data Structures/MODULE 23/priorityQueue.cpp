#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> mxPq;

    while (true)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int x;
            cin >> x;
            mxPq.push(x);
        }
        else if (cmd == 1)
        {
            cout << mxPq.top() << endl;
        }
        else if (cmd == 2)
        {
            mxPq.pop();
        }
        else if (cmd == 3)
        {
            break;
        }
    }

    return 0;
}