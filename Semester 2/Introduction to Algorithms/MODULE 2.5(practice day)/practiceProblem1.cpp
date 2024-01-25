#include <bits/stdc++.h>
using namespace std;
vector<int>v[1005];
bool isVisited[1005];
int path[1005];
void bfs_Trav(int src)
{
    queue<int>p;
    p.push(src);
    isVisited[src]=true;
    while (!p.empty())
    {
        int par=p.front();
        p.pop();
        for(int child:v[par])
        {
            if(!isVisited[child])
            {
                
            }
        }
    }
    
}
int main()
{ 
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    return 0;
}