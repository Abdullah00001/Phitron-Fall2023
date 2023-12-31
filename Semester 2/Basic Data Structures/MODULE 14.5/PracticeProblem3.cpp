#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N; 
    stack<int>p;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        p.push(x);
    }
    stack<int>q;
    while (!p.empty())
    {
        int x=p.top();
        p.pop();
        q.push(x);
    }
    p=q;
    while (!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;
    return 0;
}