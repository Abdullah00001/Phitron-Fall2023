#include <stdio.h>

int main() {
    // Your code here
    int n;
    scanf("%d",&n);
    float a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for (int i =  x; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%0.2f ",a[i]);
    }
    
    return 0;
}