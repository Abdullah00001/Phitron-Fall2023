#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    float a;
    double b;
    while (cin>>a>>b)
    {
        cout<<a<<endl<<fixed<<setprecision(5)<<b<<endl;
    }
    
    return 0;
}