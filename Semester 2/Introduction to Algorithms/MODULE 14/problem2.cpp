#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int from, to, cost;
    Edge(int from, int to, int cost)
    {
        this->from = from;
        this->to = to;
        this->cost = cost;
    }
};
bool cmp(Edge a,Edge b)
{
    return a.cost>b.cost;
}
int main()
{

    return 0;
}