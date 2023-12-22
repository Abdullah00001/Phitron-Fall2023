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
void addNodes(Node *&head, Node *&tail, int val)
{
    Node *addNode = new Node(val);
    if (head == NULL)
    {
        head = addNode;
        tail = addNode;
        return;
    }
    tail->next = addNode;
    tail = addNode;
}
void straightWay(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    straightWay(n->next);
}
void recursiveWay(Node *n)
{
    if (n == NULL)
        return;
    recursiveWay(n->next);
    cout << n->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        addNodes(head, tail, val);
    }
    straightWay(head);
    cout << endl;
    recursiveWay(head);
    return 0;
}