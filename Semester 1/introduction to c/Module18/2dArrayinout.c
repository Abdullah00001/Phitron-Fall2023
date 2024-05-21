#include <stdio.h>

int main()
{
    int arr,arrNumb;
    scanf("%d %d",&arr,&arrNumb);
    int array[arrNumb][arr];
    for (int i = 0; i < arrNumb; i++)
    {
        for (int j = 0; j < arr; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for (int i = 0; i < arrNumb; i++)
    {
        for (int j = 0; j < arr; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}