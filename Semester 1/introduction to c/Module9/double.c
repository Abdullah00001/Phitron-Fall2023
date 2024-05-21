#include <stdio.h>

int main() {
    
    int m,n,o;
    scanf("%d %d",&m,&n);
    o=m+n;
    double a[m],b[n],c[o];
    for (int i = 0; i < m; i++)
    {
        scanf("%lf",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&b[i]);
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
    for (int i = 0; i < o; i++)
    {
        printf("%0.5lf ",c[i]);
    }
    

    return 0;
}