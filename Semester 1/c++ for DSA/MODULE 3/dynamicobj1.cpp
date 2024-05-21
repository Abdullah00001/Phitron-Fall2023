#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int clss;
    int roll;
    double gpa;
    Student(int clss, int roll, double gpa)
    {
        this->clss = clss;
        this->roll = roll;
        this->gpa = gpa;
    }
};
int main()
{
    Student *Rahim = new Student(12, 14, 4.32);
    cout << Rahim->clss << " " << Rahim->roll << " " << Rahim->gpa << endl;
    delete Rahim;
    cout << Rahim->clss << " " << Rahim->roll << " " << Rahim->gpa << endl;
    return 0;
}