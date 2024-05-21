#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    Node a(n);
    Node b(m);
    a.next = &b;
    cout << a.val << " " << a.next->val << endl;
    return 0;
}