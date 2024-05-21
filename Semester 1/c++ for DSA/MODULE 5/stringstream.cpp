#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream b(s);
    string c;
    while (b >> c)
    {
        cout << c << endl;
    }
    // int cnt = 0;
    // while (b >> c)
    // {
    //     cnt++;
    // }
    // cout << cnt << endl;
    return 0;
}