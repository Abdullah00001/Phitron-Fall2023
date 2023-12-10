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
Student Rahim()
{
    Student Rahim(9, 21, 3.32);
    return Rahim;
}
int main()
{
    Student Ans = Rahim();
    cout << Ans.clss << " " << Ans.roll << " " << Ans.gpa << endl;
    return 0;
}