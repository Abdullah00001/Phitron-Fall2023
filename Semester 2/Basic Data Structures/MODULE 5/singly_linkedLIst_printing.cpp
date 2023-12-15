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
    Node *head = new Node(303);
    Node *a = new Node(508);
    Node *b = new Node(404);
    Node *c = new Node(310);
    Node *d = new Node(380);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    return 0;
}