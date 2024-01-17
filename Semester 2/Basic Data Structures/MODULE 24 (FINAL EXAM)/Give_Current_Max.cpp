#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else
        {
            return a.roll > b.roll;
        }
    }
};
int main()
{

    int N;
    cin >> N;
    priority_queue<Student, vector<Student>, cmp> A;
    for (int i = 0; i < N; i++)
    {
        string Name;
        int Roll, Marks;
        cin >> Name >> Roll >> Marks;
        Student obj(Name, Roll, Marks);
        A.push(obj);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string Name;
            int Roll, Marks;
            cin >> Name >> Roll >> Marks;
            Student X(Name, Roll, Marks);
            A.push(X);
            cout << A.top().name << " " << A.top().roll << " " << A.top().marks << endl;
        }
        else if (cmd == 1)
        {
            if (A.empty())
            {
                cout << "Empty" << endl;
            }
            else
                cout << A.top().name << " " << A.top().roll << " " << A.top().marks << endl;
        }
        else if (cmd == 2)
        {
            if (A.empty())
                cout << "Empty" << endl;
            else
            {
                A.pop();
                if (A.empty())
                    cout << "Empty" << endl;

                else
                    cout << A.top().name << " " << A.top().roll << " " << A.top().marks << endl;
            }
        }
    }

    return 0;
}