#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[101];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b, c, d;

    cin.getline(a.name, 101);
    cin >> a.roll >> a.cgpa;
    getchar();
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    cin.getline(b.name, 101);
    cin >> b.roll >> b.cgpa;
    getchar();
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    cin.getline(c.name, 101);
    cin >> c.roll >> c.cgpa;
    getchar();
    cout << c.name << " " << c.roll << " " << c.cgpa << endl;

    cin.getline(d.name, 101);
    cin >> d.roll >> d.cgpa;
    getchar();
    cout << d.name << " " << d.roll << " " << d.cgpa << endl;
    return 0;
}