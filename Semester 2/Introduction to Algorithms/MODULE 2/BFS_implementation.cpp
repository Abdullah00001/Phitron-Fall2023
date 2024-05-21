#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool isvis[1005];
void trav(int src)
{
    queue<int> p;
    p.push(src);
    isvis[src] = true;
    while (!p.empty())
    {
        int parent = p.front();
        p.pop();
        cout << parent << endl;
        for (int child : v[parent])
        {
            if (!isvis[child])
            {
                p.push(child);
                isvis[child] = true;
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
    trav(src);
    return 0;
}