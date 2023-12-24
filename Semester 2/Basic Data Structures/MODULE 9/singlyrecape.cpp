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
void addNodes(Node *&head,Node *&tail,int value)
{
    Node *addNode=new Node(value);
    if (head==NULL)
    {
        head=addNode;
        tail=addNode;
        return;
    }
    tail->next=addNode;
    tail=addNode;
}
void addHeads(Node *&head,int value)
{
    Node *addHead=new Node(value);
    if (head==NULL)
    {
        head=addHead;
        return;
    }
    
}
void addTails(Node *&head,int value)
{
    Node *addTail=new Node(value);
    Node *tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=addTail;
}
void insertPstn(Node *head,int position,int value)
{
    Node *newNode=new Node(value);
    Node *tmp=head;
    for (int i = 1; i <= position-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp=newNode;
}
void insertHead(Node *&head,int value)
{
    Node *insrtHead=new Node(value);
    insrtHead->next=head;
    head=insrtHead;
}
int main()
{
    
    return 0;
}