#include <stdio.h>

int main() {
    // Your code here
    // int arr[6]={10, 20, 30, 40, 50};
    // int x = 0;
    // for (int i = 5; i > 1; i--)
    // {
    //     arr[i]=arr[i-1];
        
    // }
    // arr[0]=0;
    // printf("%d ",arr[6]);
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x, y;
    scanf("%d %d",&x,&y);

    for (int i = n; i >= x+1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[x]=y;
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}