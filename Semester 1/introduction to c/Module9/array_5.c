#include <stdio.h>

int main() {
    // Your code here
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for (int i = x; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    // arr[x]=y;
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0; 
}