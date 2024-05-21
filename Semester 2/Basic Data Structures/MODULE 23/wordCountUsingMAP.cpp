#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> cnt;
    while (ss >> word)
    {
        cnt[word]++;
    }
    // cout << cnt["galaxies"] << endl;
    for (auto it = cnt.begin(); it != cnt.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}