#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string c;
    c = a + b;
    cout << c << endl;
    cout << c.size() << endl;
    cout << c.max_size() << endl;
    cout << c.capacity() << endl;
    cout << c.length() << endl;
    c[0] = 's';
    cout << c << endl;
    c.back() = 'Y';
    cout << c << endl;
    c.front() = 'S';
    cout << c << endl;
    string d = "amar nam somudro.ami bangladeshe thaki.";
    cout << d << endl;
    string r = "i love Allah";
    string s = "Subahanhutwala";
    r += s;
    cout << r << endl;
    return 0;
}