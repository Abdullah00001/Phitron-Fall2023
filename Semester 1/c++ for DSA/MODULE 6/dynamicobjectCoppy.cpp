#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int roll;
    person() {}
    person(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};
int main()
{
    string name;
    int roll;
    string name1;
    int roll1;
    cin >> name >> roll >> name1 >> roll1;
    person *user1 = new person(name, roll);
    person *user2 = new person(name1, roll1);
    *user1 = *user2;
    delete user2;
    cout << "Name : " << user1->name << endl
         << "Roll : " << user1->roll << endl;
    return 0;
}