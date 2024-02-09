#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int groupSize[N];
int lvl[N];
void init_Par(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        groupSize[i] = 1;
        lvl[i] = 0;
    }
}
int dsu(int n)
{
    if (par[n] == -1)
        return n;
    par[n] = dsu(par[n]);
    return par[n];
}
/* void dsu_Union(int Node1, int Node2)
{
    int leaderA = dsu(par[Node1]);
    int LeaderB = dsu(par[Node2]);
    par[leaderA] = LeaderB;
} */
void dsuBy_level(int Node1, int Node2)
{
    int leaderA = dsu(Node1);
    int LeaderB = dsu(Node2);
    if (lvl[leaderA] > lvl[LeaderB])
    {
        par[LeaderB] = leaderA;
    }
    else if (lvl[LeaderB] > lvl[leaderA])
    {
        par[leaderA] = LeaderB;
    }
    else
    {
        par[leaderA] = LeaderB;
        lvl[LeaderB]++;
    }
}
/* void dsu_bySize(int Node1, int Node2)
{
    int leaderA = dsu(par[Node1]);
    int LeaderB = dsu(par[Node2]);
    if (groupSize[leaderA] > groupSize[LeaderB])
    {
        par[LeaderB] = leaderA;
        groupSize[LeaderB] += groupSize[leaderA];
    }
    else
    {
        par[leaderA] = LeaderB;
        groupSize[LeaderB] += groupSize[leaderA];
    }
} */
int main()
{
    init_Par(7);
    dsuBy_level(1, 2);
    dsuBy_level(2, 3);
    dsuBy_level(4, 5);
    dsuBy_level(5, 6);
    dsuBy_level(1, 4);
    cout << dsu(1) << endl;
    cout << dsu(4) << endl;
    return 0;
}