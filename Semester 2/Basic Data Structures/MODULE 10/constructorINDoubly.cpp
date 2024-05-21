#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lst;
    lst = {10, 20, 30, 40};
    for (int vlu : lst)
        cout << vlu << " ";
    cout << endl;
    list<int> dlst(3);
    dlst = {90, 80, 70};
    for (int vl : dlst)
        cout << vl << " ";
    cout << endl;
    list<int> myList(10, 5);
    for (int val : myList)
        cout << val << " ";
    cout << endl;
    list<int> cpl(dlst);
    for (int va : cpl)
        cout << va << " ";
    cout << endl;
    int arr[10] = {45, 67, 87};
    list<int> ml(arr, arr + 10);
    for (int v : ml)
        cout << v << " ";
    cout << endl;

    return 0;
}