#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    queue<int> p;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        p.push(x);
    }
    stack<int> q;
    while (!p.empty())
    {
        int x = p.front();
        p.pop();
        q.push(x);
    }
    while (!q.empty())
    {
        int y = q.top();
        q.pop();
        p.push(y);
    }
    while (!p.empty())
    {
        cout << p.front() << " ";
        p.pop();
    }
    cout << endl;
    return 0;
}