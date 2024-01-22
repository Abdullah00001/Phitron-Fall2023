#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    int mat[N+1][N+1];
    memset(mat, 0, sizeof(mat));
    while (E--)
    {
        int A, B;
        cin >> A >> B;
        mat[A][B] = 1;
        mat[B][A] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    // if (mat[4][2] == 1)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
    return 0;
}