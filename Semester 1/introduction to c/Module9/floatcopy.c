#include <stdio.h>

int main() {
    // Your code here
    int m,n,o;
    scanf("%d %d",&m,&n);
    o=m+n;
    float a[m],b[n],c[o];
    
    for (int i = 0; i < m; i++)
    {
        scanf("%f",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&b[i]);
    }
    for (int i = 0; i < m; i++)
    {
        c[i]=a[i];
    }

    int i=m;
    for (int j = 0; j <n ; j++)
    {
        c[i]=b[j];
        i++;
    }
    for (int i = 0; i < o; i++)
    {
        printf("%0.2f ",c[i]);
    }
    
    return 0;
}