#include <stdio.h>

int main() {
    // Your code here
    int n;
    scanf("%d",&n);
    double a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i]);
    }
    
    int x;
    double y;
    scanf("%d %lf",&x,&y);
    for (int i = n; i >= x+1; i--)
    {
        a[i]=a[i-1];
    }
    a[x]=y;
    for (int i = 0; i <= n; i++)
    {
        printf("%lf ",a[i]);
    }
    
    
    return 0;
}