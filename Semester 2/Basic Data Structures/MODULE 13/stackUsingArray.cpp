#include <bits/stdc++.h>
using namespace std;
class myStack
{
private:
    vector<int> stck;

public:
    void push(int value)
    {
        stck.push_back(value);
    }
    void pop()
    {
        stck.pop_back();
    }
    int top()
    {
        return stck.back();
    }
    int size()
    {
        return stck.size();
    }
    bool empty()
    {
        if (stck.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack v;
    /* v.push(10);
    cout << v.top() << endl;
    int sz = v.size();
    cout << sz << endl;
    v.pop();
    if (v.empty() == true)
    {
        cout << "stack is empaty" << endl;
    }
    else
    {

        cout << v.top() << endl;
    } */
    /* int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        v.push(val);
    }
    cout << v.top() << endl; */
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        v.push(val);
    }
    cout << v.top() << endl;
    while (v.empty() != true)
    {
        cout << v.top() << endl;
        v.pop();
    }

    return 0;
}