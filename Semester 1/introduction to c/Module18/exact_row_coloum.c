#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d ",array[i][j]);
    //     }
    //     printf("\n");
    // }
    // int e;
    // scanf("%d",&e);
    // for (int i = 0; i < col; i++)
    // {
    //     printf("%d ",array[e][i]);
    // }
    int c;
    scanf("%d",&c);
    for (int i = 0; i < row; i++)
    {
        printf("%d ",array[i][c]);
    }
    
    printf("\n");
    return 0;
}