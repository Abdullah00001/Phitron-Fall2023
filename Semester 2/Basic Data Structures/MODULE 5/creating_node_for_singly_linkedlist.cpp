#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
};
int main()
{
    node a, b;
    cin >> a.val >> b.val;
    a.next = &b;
    b.next = NULL;
    cout << a.val << " " << a.next->val << endl;
    return 0;
}