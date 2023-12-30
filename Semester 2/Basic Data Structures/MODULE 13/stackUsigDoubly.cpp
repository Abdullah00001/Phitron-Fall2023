#include <bits/stdc++.h>
using namespace std;
class myStack
{
private:
    list<int> dblyList;

public:
    void push(int value)
    {
        dblyList.push_back(value);
    }
    void pop()
    {
        dblyList.pop_back();
    }
    int top()
    {
        return dblyList.back();
    }
    int size()
    {
        return dblyList.size();
    }
    bool empty()
    {
        if (dblyList.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack v;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push(x);
    }
    while (v.empty() != true)
    {
        cout << v.top() << endl;
        v.pop();
    }
    return 0;
}