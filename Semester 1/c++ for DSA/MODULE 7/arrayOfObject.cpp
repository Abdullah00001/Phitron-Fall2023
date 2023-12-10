#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    student class7[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, class7->name);
        cin >> class7->roll >> class7->marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "NAME : " << class7->name << endl
             << "ROLL : " << class7->roll << endl
             << "MARKS : " << class7->marks << endl;
    }

    return 0;
}