#include <bits/stdc++.h>
using namespace std;
class data
{
public:
    string Name;
    int Age;
    data(string name, int age)
    {
        Name = name;
        Age = age;
    }
    void hakaw()
    {
        cout << Name << endl
             << Age << endl;
    }
};
int main()
{
    string name;
    int age;
    cin >> name >> age;
    data user(name, age);
    user.hakaw();
    return 0;
}