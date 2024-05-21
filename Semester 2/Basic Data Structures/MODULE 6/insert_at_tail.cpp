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
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linkedList(Node *head)
{
    Node *tmp = head;
    cout << "Your Linked List" << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "OPTION 1: INSERT AT TAIL" << endl;
        cout << "OPTION 2: PRINT LINKED LIST" << endl;
        cout << "OPTION 3: TERMINATE" << endl;
        int optn;
        cin >> optn;
        if (optn == 1)
        {
            cout << "PLEASE INSER A VALUE" << endl;
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (optn == 2)
        {
            print_linkedList(head);
            cout << endl;
        }
        else if (optn == 3)
        {
            break;
        }
    }

    return 0;
}