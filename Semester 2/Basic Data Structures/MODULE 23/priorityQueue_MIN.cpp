#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> minPq;
    while (true)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int x;
            cin >> x;
            minPq.push(x);
        }
        else if (cmd == 1)
        {
            cout << minPq.top() << endl;
        }
        else if (cmd == 2)
        {
            minPq.pop();
        }
        else if (cmd == 3)
        {
            break;
        }
    }

    return 0;
}