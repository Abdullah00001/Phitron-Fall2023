#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        stack<string> st;
        for (char x : S)
        {
            if (!st.empty() && st.top() == "0" && x == '1')
            {
                st.pop();
            }
            else if (!st.empty() && st.top() == "1" && x == '0')
            {
                st.pop();
            }
            else
            {
                string str(1, x);
                st.push(str);
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}