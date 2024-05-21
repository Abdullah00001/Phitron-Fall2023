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
void insertNode(Node *&head, int value)
{
    Node *newNode = new Node(value);
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
void prnt_linkedList(Node *head)
{
    Node *tmp = head;
    cout << "YOUR LINKED LIST: " << endl;
    cout << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void addNewNode(Node *head, int addPos, int addValue)
{
    Node *addNode = new Node(addValue);
    Node *tmp = head;
    for (int i = 1; i < addPos - 1; i++)
    {
        tmp = tmp->next;
    }
    addNode->next = tmp->next;
    tmp->next = addNode;
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
            insertNode(head, value);
        }
        else if (optn == 2)
        {
            prnt_linkedList(head);
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