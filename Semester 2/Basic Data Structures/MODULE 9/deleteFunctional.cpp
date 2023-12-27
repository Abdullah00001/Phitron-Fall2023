#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
void dltHead(Node *&head)
{
    Node *delHead = head;
    head = head->next;
    delete delHead;
    head->prev = NULL;
}
void dltNode(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete delNode;
}
void dltTail(Node *&tail)
{
    Node *delTail = tail;
    tail = tail->prev;
    delete delTail;
    tail->next = NULL;
}
void prntfrwrd(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void prntbcwrd(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int nodeSize(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(40);
    Node *b = new Node(50);
    Node *c = new Node(60);
    Node *d = new Node(70);
    Node *tail = d;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    // dltTail(tail);
    // prntfrwrd(head);
    // prntbcwrd(tail);
    int postn;
    cin >> postn;
    if (postn == 0)
    {
        dltHead(head);
        // prntfrwrd(head);
        // prntbcwrd(tail);
    }
    else if (postn == nodeSize(head) - 1)
    {
        dltTail(tail);
        // prntfrwrd(head);
        // prntbcwrd(tail);
    }
    else if (postn > 0)
    {
        if (postn >= nodeSize(head))
        {
            cout << "INVALID" << endl;
        }
        else
        {
            dltNode(head, postn);
            // prntfrwrd(head);
            // prntbcwrd(tail);
        }
    }
    prntfrwrd(head);
    prntbcwrd(tail);
    return 0;
}