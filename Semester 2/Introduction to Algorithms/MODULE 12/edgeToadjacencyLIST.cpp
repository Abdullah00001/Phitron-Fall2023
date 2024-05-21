#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>edgeList[n];
    while (e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edgeList[a].push_back({b,c});
    }
    
    return 0;
}