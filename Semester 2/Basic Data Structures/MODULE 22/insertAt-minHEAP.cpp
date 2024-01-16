#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        v.push_back(X);
        int crntIndex = v.size() - 1;
        while (crntIndex != 0)
        {
            int parentIndex = (crntIndex - 1) / 2;
            if (v[parentIndex] > v[crntIndex])
            {
                swap(v[parentIndex], v[crntIndex]);
            }
            else
            {
                break;
            }
            crntIndex = parentIndex;
        }
    }
    for (int val : v)
        cout << val << " ";
    cout << endl;
    return 0;
}