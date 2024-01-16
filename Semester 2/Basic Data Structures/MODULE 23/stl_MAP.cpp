#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> p;
    p["abdullah"] = 120;
    p["bin"] = 119;
    p["omar"] = 118;
    for(auto it=p.begin();it!=p.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}