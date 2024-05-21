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
    student class8[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, class8[i].name);
        cin >> class8[i].roll >> class8[i].marks;
    }
    student badStudent;
    badStudent.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (class8[i].marks < badStudent.marks)
        {
            badStudent = class8[i];
        }
    }
    cout << badStudent.name << " " << badStudent.roll << " " << badStudent.marks << endl;

    return 0;
}