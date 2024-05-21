#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "found" << endl;
    else
        cout << "SORRY NOT Found...!" << endl;
    return 0;
}