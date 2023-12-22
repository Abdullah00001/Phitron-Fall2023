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
void addNodes(Node *&head, Node *&tail, int value)
{
    Node *addnode = new Node(value);
    if (head == NULL)
    {
        head = addnode;
        tail = addnode;
        return;
    }
    tail->next = addnode;
    tail = addnode;
}
void acesadingSort(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
                swap(i->val, j->val);
        }
    }
}
void decesdingSort(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
                swap(i->val, j->val);
        }
    }
}
void prntNodes(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void prntReverse(Node *n)
{
    if (n == NULL)
        return;
    prntReverse(n->next);
    cout << n->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        addNodes(head, tail, value);
    }
    prntReverse(head);
    cout << endl;
    acesadingSort(head);
    prntNodes(head);
    decesdingSort(head);
    prntNodes(head);
    return 0;
}