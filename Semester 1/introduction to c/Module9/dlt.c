#include <stdio.h>

int main() {
    // Your code here
    int n;
    scanf("%d",&n);
    float a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%f",&a[i]);
    }
    
    int i=0,j=n-1;
    while (i<j)
    {
        float temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%0.3f ",a[i]);
    }
    
    
    return 0;
}