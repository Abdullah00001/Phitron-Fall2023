#include <stdio.h>

int main()
{
    int n,s,l;
    scanf("%d",&n);
    s=n-1;
    l=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= l; k++)
        {
            printf("* ");
        }
        l+=2;
        printf("\n");
        s--;
    }
    return 0;
}