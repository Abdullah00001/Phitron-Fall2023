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
    int sum = 0;
    int pos1,pos2;
    cin>>pos1>>pos2;
    for (int i = pos1; i < pos2; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}