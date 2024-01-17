#include <bits/stdc++.h>
using namespace std;
bool cmprPair(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
        return a.second > b.second;
    else
        return a.first < b.first;
}
int main()
{
    vector<pair<string, int>> A;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string S;
        int I;
        cin >> S >> I;
        A.push_back({S, I});
    }
    sort(A.begin(), A.end(), cmprPair);
    for (auto it = A.begin(); it != A.end(); it++)
        cout << it->first << " " << it->second << endl;
    return 0;
}