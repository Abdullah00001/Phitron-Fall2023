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
    student class6[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, class6[i].name);
        cin >> class6[i].roll >> class6[i].marks;
    }
    student brightest;
    brightest.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (class6[i].marks > brightest.marks)
        {
            brightest = class6[i];
        }
    }
    cout << brightest.name << " " << brightest.roll << " " << brightest.marks << endl;
    return 0;
}