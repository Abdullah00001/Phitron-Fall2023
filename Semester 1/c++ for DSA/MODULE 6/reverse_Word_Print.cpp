#include <bits/stdc++.h>
using namespace std;
void rvrs(stringstream &a)
{
    string b;
    if (a >> b)
        rvrs(a);
    cout << b << endl;
}
int main()
{
    string a;
    getline(cin, a);
    stringstream b(a);
    rvrs(b);
    return 0;
}