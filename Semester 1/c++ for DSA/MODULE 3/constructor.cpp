#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int cls;
    int roll;
    double gpa;
    Student(int cl, int r, double g)
    {
        cls = cl;
        roll = r;
        gpa = g;
    }
};
int main()
{
    Student rahim(8, 12, 3.27);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl; 
    return 0;
}