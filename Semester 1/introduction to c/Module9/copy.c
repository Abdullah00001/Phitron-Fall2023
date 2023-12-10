#include <stdio.h>

int main() {
    // Your code here
    int m=5,n=3;
    int a[m],b[n],c[m+n];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < m; i++)
    {
        c[i]=a[i];
    }
    int i=m;
    for (int j = 0; j < n; j++)
    {
        c[i]=b[j];
        i++;
    }
    
    for (int i=0 ; i <n+m ; i++)
    {
        printf("%d ",c[i]);
    }
    
    
    return 0;
}