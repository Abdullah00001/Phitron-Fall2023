#include <bits/stdc++.h>
using namespace std;
class user
{
public:
    string NAME;
    int AGE;
    long long int ID;
    user(string name, int age, long long int id)
    {
        NAME = name;
        AGE = age;
        ID = id;
    }
    void userData(int n)
    {
        string NAME;
        int AGE;
        long long int ID;
        User users[n];
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
    }
};
int main()
{

    return 0;
}