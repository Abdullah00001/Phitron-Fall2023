#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    queue<string> serial;
    while (Q--)
    {
        int cmnd;
        cin >> cmnd;
        if (cmnd == 0)
        {

            string prsnName;
            cin >> prsnName;
            serial.push(prsnName);
        }
        else if (cmnd == 1)
        {
            if (!serial.empty())
            {
                cout << serial.front() << endl;
                serial.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}