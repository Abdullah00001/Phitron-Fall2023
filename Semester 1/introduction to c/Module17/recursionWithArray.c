#include <stdio.h>
void rcrsn(int array[],int size,int i)
{
    if(i==size) return;
    printf("%d\n",array[i]);
    rcrsn(array,size,++i);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    rcrsn(arr,n,0);
    return 0;
}