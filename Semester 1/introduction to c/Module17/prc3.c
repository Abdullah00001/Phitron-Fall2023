#include <stdio.h>
void rcrsn(int *array,int size,int index)
{
    if(index==size) return;
    printf("%d ",array[index]);
    rcrsn(array,size,++index);
}
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i;
    scanf("%d",&i);
    rcrsn(arr,N,i);
    return 0;
}