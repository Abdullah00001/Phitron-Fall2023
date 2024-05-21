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
void prntbcwrd(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int postn, value;
    cin >> postn >> value;
    if (postn == 0)
    {
        insrtHead(head, tail, value);
    }
    prntfrwrd(head);
    prntbcwrd(head);
    return 0;
}