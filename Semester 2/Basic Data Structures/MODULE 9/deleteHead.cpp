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
    Node *delHead=head;
    head=head->next;
    head->prev=NULL;
    delete delHead;
}
int main()
{ 
    
    return 0;
}