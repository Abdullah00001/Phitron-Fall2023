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
void insertNodes(Node *&head, int value)
{
    Node *crtNodes = new Node(value);
    if (head == NULL)
    {
        head = crtNodes;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = crtNodes;
}
void prntLinkedLIst(Node *head)
{
    Node *tmp = head;
    cout << "YOUR LINKED LIST: " << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void addNewNode(Node *head, int pos, int val)
{
    Node *crtNewNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    crtNewNode->next = tmp->next;
    tmp->next = crtNewNode;
    cout << "NEW NODE ADDED" << endl;
}
int main()
{
    Node *head = NULL;
    cout << "Choose a Option you want" << endl;
    while (true)
    {
        cout << "OPTION 1 : INSERT A NODE" << endl;
        cout << "OPTION 2 : PRINT THE LINKED LIST" << endl;
        cout << "OPTION 3 : ADD ANOTHER NODE" << endl;
        cout << "OPTION 4 : EXIT" << endl;
        cout << endl;
        int optn;
        cin >> optn;
        if (optn == 1)
        {
            cout << "ADD A VALUE" << endl;
            int value;
            cin >> value;
            insertNodes(head, value);
        }
        else if (optn == 2)
        {
            prntLinkedLIst(head);
            cout << endl;
        }
        else if (optn == 3)
        {
            int pos, new_val;
            cout << "INSERT THE POSITION" << endl;
            cin >> pos;
            cout << "INSERT THE VALUE" << endl;
            cin >> new_val;
            addNewNode(head, pos, new_val);
        }

        else if (optn == 4)
        {
            break;
        }

        cout << "" << endl;
    }
    return 0;
}