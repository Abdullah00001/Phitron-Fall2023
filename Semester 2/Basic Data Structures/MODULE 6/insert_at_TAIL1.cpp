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
void insert_atTAil(Node *&head, int val)
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
void printing_LINKEDlist(Node *head)
{
    Node *tmp = head;
    cout << "YOUR LINKED LIST" << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "PLEASE CHOOSE A OPTION........!" << endl;
        cout << "OPTION 1: INSERT AT TAIL" << endl;
        cout << "OPTION 2: PRINT LINKED LIST" << endl;
        cout << "OPTION 3: TERMINATE" << endl;
        int optn;
        cin >> optn;
        if (optn == 1)
        {
            cout << "YOU CHOOSE OPTION 1:" << endl;
            cout << "PLEASE INSER A VALUE" << endl;
            int val;
            cin >> val;
            insert_atTAil(head, val);
        }
        else if (optn == 2)
        {
            cout << "YOU CHOOSE OPTION 2:" << endl;
            printing_LINKEDlist(head);
        }
        else if (optn == 3)
        {
            cout << "YOU CHOOSE OPTION 3:" << endl;
            cout << "ALL OPERATION ARE DONE" << endl;
        }
    }

    return 0;
}