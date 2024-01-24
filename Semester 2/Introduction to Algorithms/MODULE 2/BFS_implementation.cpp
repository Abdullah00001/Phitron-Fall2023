#include <bits/stdc++.h>
using namespace std;
vector<int> bFtrav[1005];
bool isVis[1005];
void trav(int src)
{
    queue<int> p;
    p.push(src);
    isVis[src] = true;
    while (!p.empty())
    {
        int prnt = p.front();
        p.pop();
        cout << prnt << endl;
        for (int child : bFtrav[prnt])
        {
            if (!isVis[child])
            {
                p.push(child);
                isVis[child] = true;
            }
        }
    }
}
int main()
{
    int N, E;
    cin >> N >> E;
    while (E--)
    {
        int A, B;
        cin >> A >> B;
        bFtrav[A].push_back(B);
        bFtrav[B].push_back(A);
    }
    int src;
    cin >> src;
    trav(src);
    return 0;
}