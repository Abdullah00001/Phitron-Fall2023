#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    while (Q--)
    {
        string S;
        cin >> S;
        stack<char> st;
        for (char x : S)
        {
            if (x == '0')
            {
                st.push(x);
            }
            else if (x == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(x);
                }
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}