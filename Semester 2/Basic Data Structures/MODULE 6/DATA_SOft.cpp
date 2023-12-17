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
void addData(Node *&head, int value)
{
    Node *addNode = new Node(value);
    if (head == NULL)
    {
        head = addNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = addNode;
    cout << "ADDED SUCCESSFULLY!" << endl;
}
void prntDatalst(Node *head)
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
void addNewNode(Node *head, int postn, int valu)
{
    Node *newNode = new Node(valu);
    Node *tmp = head;
    for (int i = 1; i <= postn - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "NEW NODE ADDED" << endl;
}
void add_OnHead(Node *&head, int val)
{
    Node *newHead = new Node(val);
    newHead->next = head;
    head = newHead;
    cout << "NEW HEAD ADDED SUCCESFULLY" << endl;
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
        cout << "OPTION 4 : ADD NEW HEAD" << endl;
        cout << "OPTION 5 : EXIT" << endl;
        cout << endl;
        int optn;
        cin >> optn;
        if (optn == 1)
        {
            cout << "ADD A VALUE" << endl;
            int value;
            cin >> value;
            addData(head, value);
        }
        else if (optn == 2)
        {
            prntDatalst(head);
            cout << endl;
        }
        else if (optn == 3)
        {
            int pos, new_val;
            cout << "INSERT THE POSITION" << endl;
            cin >> pos;
            cout << "INSERT THE VALUE" << endl;
            cin >> new_val;
            if (pos == 0)
            {
                add_OnHead(head, new_val);
            }
            else
            {
                addNewNode(head, pos, new_val);
            }
        }
        else if (optn == 4)
        {
            int headVal;
            cout << "INSERT A VALUE FOR NEW HEAD!" << endl;
            cin >> headVal;
            add_OnHead(head, headVal);
        }

        else if (optn == 5)
        {
            break;
        }

        cout << "" << endl;
    }
    return 0;
}