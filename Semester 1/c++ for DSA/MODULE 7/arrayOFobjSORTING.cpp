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
    student cls7[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, cls7[i].name);
        cin >> cls7[i].roll >> cls7[i].marks;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cls7[i].marks < cls7[j].marks)
            {
                swap(cls7[i], cls7[j]);
            }
            if (cls7[i].marks == cls7[j].marks)
            {
                if (cls7[i].roll > cls7[j].roll)
                {
                    swap(cls7[i], cls7[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << cls7[i].name << " " << cls7[i].roll << " " << cls7[i].marks << endl;
    }

    return 0;
}