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
class stck
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        if (head == NULL)
            return;
        sz--;
        Node *dltNode = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete dltNode;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};
class qeue
{
public:
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        if (head == NULL)
            return;
        sz--;
        Node *dltNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        else
            head->prev = NULL;
        delete dltNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};
int main()
{
    int N, M;
    cin >> N >> M;
    stck A;
    qeue B;
    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;
        A.push(V);
    }
    for (int i = 0; i < M; i++)
    {
        int V;
        cin >> V;
        B.push(V);
    }
    if (A.size() != B.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = false;
        while (!A.empty() && !B.empty())
        {
            if (A.top() != B.front())
            {
                flag = true;
                break;
            }
            A.pop();
            B.pop();
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}