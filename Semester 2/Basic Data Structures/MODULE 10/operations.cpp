#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        mylist.push_back(value);
    }
    for (int x : mylist)
    {
        cout << x << " ";
    }
    cout << endl;
    mylist.sort();
    for (int x : mylist)
    {
        cout << x << " ";
    }
    cout << endl;
    mylist.sort(greater<int>());
    for (int x : mylist)
    {
        cout << x << " ";
    }
    cout << endl;
    mylist.unique();
    for (int x : mylist)
    {
        cout << x << " ";
    }
    cout << endl;
    mylist.reverse();
    for (int x : mylist)
    {
        cout << x << " ";
    }
    cout << endl;
    mylist.remove(40);
    for (int x : mylist)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << mylist.front() << endl;
    cout << mylist.back() << endl;
    cout << *next(mylist.begin(), 4) << endl;
    return 0;
}