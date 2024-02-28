/*******************************************
 ***************TOP_DOWN_APROACH************
 ********************************************/
#include <bits/stdc++.h>
using namespace std;
bool subSum(int n, int w, int *arr)
{
    if (n == 0)
        return w == 0;
    if (arr[n - 1] <= w)
    {
        bool optn1 = subSum(n - 1, w - arr[n - 1], arr);
        bool optn2 = subSum(n - 1, w, arr);
        return optn1 || optn2;
    }
    else
        return subSum(n - 1, w, arr);
}
int main()
{
    int n, w;
    cin >> n >> w;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (subSum(n, w, arr))
        cout << "yes" << endl;
    else
        cout << "NO" << endl;
    return 0;
}