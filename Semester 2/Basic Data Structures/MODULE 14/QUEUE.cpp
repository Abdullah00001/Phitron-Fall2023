#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> m;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        m.push(x);
    }
    while (!m.empty())
    {
        cout << m.front() << " ";
        m.pop();
    }
    cout << endl;

    return 0;
}