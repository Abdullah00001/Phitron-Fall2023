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
        cout << "ADDED SUCCESSFULLY!" << endl;
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
        if (tmp == NULL)
        {
            cout << endl
                 << "INVALID INDEX" << endl;
            return;
        }
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
void deleteNode(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "INVALID INDEX" << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "INVALID INDEX" << endl;
        return;
    }
    Node *dltNode = tmp->next;
    tmp->next = tmp->next->next;
    delete dltNode;
    cout << "NODE DELETED" << endl;
}
void deleteHead(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "HEAD IS NOT AVAILABLE!" << endl;
        return;
    }

    Node *dltHead = head;
    head = head->next;
    delete dltHead;
    cout << "HEAD IS REMOVED" << endl;
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
        cout << "OPTION 5 : DELETE HEAD" << endl;
        cout << "OPTION 6 : DELETE NODE" << endl;
        cout << "OPTION 7 : EXIT" << endl;
        cout << endl;
        int optn;
        cin >> optn;
        if (optn == 1)
        {
            cout << endl
                 << "ADD VALUES IN A ROW OR COLOUMN" << endl;
            cout << "AFTER ADDING THE VALUES DONT FORGET TO GIVE A -1 AT THE END" << endl;
            int value;
            while (true)
            {
                cin >> value;
                if (value == -1)
                    break;
                addData(head, value);
            }
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
        if (optn == 5)
        {
            deleteHead(head);
        }

        else if (optn == 6)
        {
            int postn;
            cout << "ADD POSITION FOR DELETE" << endl;
            cin >> postn;
            if (postn == 0)
            {
                deleteHead(head);
            }
            else
            {
                deleteNode(head, postn);
            }
        }

        else if (optn == 7)
        {
            cout << "COPYRIGHT 2012 - 2023 ABDULLAH. ALL RIGHTS RESERVED." << endl;
            break;
        }
    }
    return 0;
}