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
void insertData(Node *&head, int val)
{
    Node *insertNode = new Node(val);
    if (head == NULL)
    {
        head = insertNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = insertNode;
}
void prntData(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void newNode(Node *head, int valu, int postn)
{
    Node *addNode = new Node(valu);
    Node *tmp = head;
    for (int i = 1; i < postn - 1; i++)
    {
        tmp = tmp->next;
    }
    addNode->next = tmp->next;
    tmp->next = addNode;
}
void newHead(Node *&head, int value)
{
    Node *addHead = new Node(value);
    addHead->next = head;
    head = addHead;
}
void deleteNode(Node *head,int pstn)
{
    Node *tmp=head;
    for (int i = 1; i < pstn-1; i++)
    {
        tmp=tmp->next;
    }
    Node *dltNode=tmp->next;
    tmp->next=tmp->next->next;
    delete dltNode;
}
int main()
{

    return 0;
}