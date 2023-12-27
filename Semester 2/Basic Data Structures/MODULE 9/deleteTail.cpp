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
void dltTail(Node *&tail)
{
    Node *deltail = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deltail;
}
int main()
{

    return 0;
}