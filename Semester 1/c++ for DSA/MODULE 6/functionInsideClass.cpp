#include <bits/stdc++.h>
using namespace std;
class Users
{
public:
    string NAME;
    int AGE;
    long long int ID;
    Users() {}
    Users(string name, int age, long long int id)
    {
        NAME = name;
        AGE = age;
        ID = id;
    }
};
int main()
{
    string Name;
    int Age;
    long long int Id;
    // getline(cin, Name);
    // getchar();
    // cin >> Age >> Id;
    // Users user1(Name, Age, Id);
    // cout << "Name : " << user1.NAME << endl
    //      << "Age : " << user1.AGE << endl
    //      << "User ID : " << user1.ID << endl;
    int n;
    cin >> n;
    getchar();
    Users user[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, Name);
        cin >> Age >> Id;
        cin.ignore();
        user[i] = Users(Name, Age, Id);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Name : " << user[i].NAME << endl
             << "Age : " << user[i].AGE << endl
             << "User ID : " << user[i].ID << endl;
    }

    return 0;
}