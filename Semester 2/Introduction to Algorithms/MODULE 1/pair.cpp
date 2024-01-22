#include <bits/stdc++.h>
using namespace std;
class Pair
{
public:
    int first, second;
    void makePair(int a, int b)
    {
        first = a;
        second = b;
    }
};
int main()
{
    int a;
    string b;
    cin >> a >> b;
    // Pair p;
    // p.makePair(a, b);
    // cout << p.first << " " << p.second << endl;
    pair<int, string> p;
    p = make_pair(a, b);
    cout << p.first << " " << p.second << endl;
    return 0;
}