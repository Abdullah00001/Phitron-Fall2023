#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int roll;
    Person(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void print()
    {
        cout << "Hello World" << endl;
    }
};
int main()
{
    string name;
    int roll;
    cin >> name >> roll;
    Person user1(name, roll);
    cout << "Name : " << user1.name << endl
         << "Roll : " << user1.roll << endl;
    return 0;
}