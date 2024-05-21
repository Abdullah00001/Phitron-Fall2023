#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int clss;
    double gpa;
    Student(int roll, int clss, double gpa)
    {
        // (*this).roll = roll;
        // (*this).clss = clss;
        // (*this).gpa = gpa;
        this->roll = roll;
        this->clss = clss;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(12, 8, 4.53);
    cout << "Roll : " << rahim.roll << ".Class : " << rahim.clss << ".Gpa : " << rahim.gpa;
    return 0;
}