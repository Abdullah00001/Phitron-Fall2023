#include <stdio.h>

int main() {
    // Your code here
    int n;
    scanf("%d",&n);
    int a[n+1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int x,y;
    scanf("%d %d",&x,&y);

    for(int i = n; i >= x+1; i--)
    {
        a[i]=a[i-1];
    }
    
    a[x]=y;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}