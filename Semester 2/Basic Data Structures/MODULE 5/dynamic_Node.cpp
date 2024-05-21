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
    Node *head = new Node(20);
    Node *a = new Node(100);
    Node *b = new Node(300);
    head->next = a;
    a->next = b;
    cout << head->val << " " << head->next->val << " " << a->next->val << endl;
    delete head;
    delete a;
    return 0;
}