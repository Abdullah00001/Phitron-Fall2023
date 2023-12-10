#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
// void swapp(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
int main()
{
    // int a,b;
    // cin>>a>>b;
    // int c=min(a,b);
    // int d=max(a,b);
    // cout<<c<<" "<<d<<endl;
    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // int mn=min({a,b,c,d});
    // int mx=max({a,b,c,d});
    // cout<<mn<<" "<<mx<<endl;
    // int x,y;
    // cin>>x>>y;
    // swapp(&y,&x);
    // cout<<y<<" "<<x<<endl;
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}