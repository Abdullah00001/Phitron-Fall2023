#include <stdio.h>
void arrayReturn(int ar[],int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ar[i]);
    }
    
}
void emni(int *ar,int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ",ar[i]);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    arrayReturn(arr,n);
    emni(arr,n);
    
    return 0;
}