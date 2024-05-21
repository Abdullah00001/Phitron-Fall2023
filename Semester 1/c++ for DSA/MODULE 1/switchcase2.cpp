#include <iostream>
using namespace std;
int main()
{ 
    int x,y;
    cin>>x>>y;
    switch(x/y)
    {
        case 0:
        cout<<"Valid"<<endl;
        break;
        case 2:
        cout<<"Valid"<<endl;
        break;
        case 3:
        cout<<"Valid"<<endl;
        break;
        default:
        cout<<"In Valid"<<endl;
    }
    return 0;
}