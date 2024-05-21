#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        int H[N];
        for (int i = 0; i < N; i++)
        {
            cin >> H[i];
        }
        ll ans = INT_MIN;
        ll ai = 0, aj = 0;
        ll i = 0, j = N - 1;
        while (i < j)
        {
            if (min(H[i], H[j]) > ans)
            {
                ans = min(H[i], H[j]);
                ai = i;
                aj = j;
            }
            if (H[i] < H[j])
                i++;
            else
                j--;
        }
        cout << ai << " " << aj << endl;
    }

    return 0;
}