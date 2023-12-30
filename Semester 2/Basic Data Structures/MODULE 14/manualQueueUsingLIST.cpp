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
class myQueue
{
public:
    list<int> mQueue;
    void push(int value)
    {
        mQueue.push_back(value);
    }
    void pop()
    {
        mQueue.pop_front();
    }
    int front()
    {
        return mQueue.front();
    }
    int size()
    {
        return mQueue.size();
    }
    bool empty()
    {
        /* if (mQueue.size() == 0)
            return true;
        else
            return false; */
        return mQueue.empty();
    }
};
int main()
{
    myQueue q;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}