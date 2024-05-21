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
void insrtHead(Node *&head, Node *&tail, int value)
{
    Node *newHead = new Node(value);
    if (head == NULL)
    {
        head = newHead;
        tail = newHead;
        return;
    }
    newHead->next = head;
    head->prev = newHead;
    head = newHead;
}
void isrtAtPstn(Node *head, int postn, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i <= postn - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
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
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *b = new Node(300);
    Node *c = new Node(400);
    Node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int postn, value;
    cin >> postn >> value;
    int sz = nodeSize(head);
    if (postn == 0)
    {
        insrtHead(head, tail, value);
    }
    else if (postn > 0)
    {
        if (postn >= sz)
        {
            cout << "INVALID" << endl;
        }
        else
        {
            isrtAtPstn(head, postn, value);
        }
    }
    prntfrwrd(head);
    prntbcwrd(tail);
    return 0;
}