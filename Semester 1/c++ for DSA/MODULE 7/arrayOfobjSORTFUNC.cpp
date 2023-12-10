#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
};
bool comp(student a, student b)
{
    if (a.marks >= b.marks)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    student cls5[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, cls5[i].name);
        cin >> cls5[i].roll >> cls5[i].marks;
    }
    sort(cls5, cls5 + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << cls5[i].name << " " << cls5[i].roll << " " << cls5[i].marks << endl;
    }

    return 0;
}