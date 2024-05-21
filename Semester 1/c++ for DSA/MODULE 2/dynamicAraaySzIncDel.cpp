#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int *D = new int[N];
    int *S = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> D[i];
        S[i] = D[i];
    }
    for (int i = 0; i < N; i++)
        cout << D[i] << " ";
    cout << endl;
    delete[] D;
    int M;
    cin >> M;
    D = new int[M];
    for (int i = 0; i < N; i++)
    {
        D[i] = S[i];
    }
    delete[] S;
    for (int i = N; i < M; i++)
        cin >> D[i];
    for (int i = 0; i < M; i++)
        cout << D[i] << " ";
    cout << endl;
    delete[] D;
    return 0;
}