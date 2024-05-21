#include <stdio.h>

int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=n*2-1;
    s=1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j >= k; j--)
        {
            printf("* ");
        }
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        printf("\n");
        s++;
        k-=2;
    }
    
    return 0;
}
