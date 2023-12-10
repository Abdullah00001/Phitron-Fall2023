#include <stdio.h>

int main()
{
    int n,s,k,temp;
    scanf("%d",&n);
    temp=n;
    n=2*n-1;
    s=temp-1;
    k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        
        if (i<=temp-1)
        {
            s--;
            k+=2;
        }
        else
        {
            s++;
            k-=2;
        }
        
        printf("\n");
    }
    
    return 0;
}