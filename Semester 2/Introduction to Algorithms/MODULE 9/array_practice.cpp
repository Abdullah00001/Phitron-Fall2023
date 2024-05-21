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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Arrayreverse" << endl;
    int ar[n];
    int i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        ar[i] = arr[j];
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}