#include <stdio.h>

int main() {
    // Your code here
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for (int i = x; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}