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
    int M;
    cin>>M;
    queue<int> q;
    for (int i = 0; i < M; i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if (N == M)
    {
        bool flag = true;
        while (!p.empty() && !q.empty())
        {
            int i = p.top();
            p.pop();
            int j = q.front();
            q.pop();
            if (i != j)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    

    return 0;
}