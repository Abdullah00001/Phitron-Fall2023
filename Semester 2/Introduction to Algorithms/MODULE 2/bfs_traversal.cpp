#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int isVis[1005];
vector<int> level;
void bfsTrav(int src)
{
    queue<int> p;
    p.push(src);
    isVis[src] = true;
    level[src] = 0;
    while (!p.empty())
    {
        int parent = p.front();
        p.pop();
        for (int child : v[parent])
        {
            if (!isVis[child])
            {
                p.push(child);
                isVis[child] = true;
                level[child] = level[parent] + 1;
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
        v[A].push_back(B);
        v[B].push_back(A);
    }
    int src;
    cin >> src;
    bfsTrav(src);
    for (int i = 0; i < N; i++)
    {
        cout << i << " " << level[i] << endl;
    }
    return 0;
}