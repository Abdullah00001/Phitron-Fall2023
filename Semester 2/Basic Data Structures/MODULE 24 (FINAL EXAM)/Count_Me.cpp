#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string S;
        getline(cin, S);
        string word;
        stringstream ss(S);
        map<string, int> cnt;
        string ans;
        int max = 0;
        while (ss >> word)
        {
            cnt[word]++;
            if (cnt[word] > max)
            {
                max = cnt[word];
                ans = word;
            }
        }
        cout << ans << " " << max << endl;
    }

    return 0;
}