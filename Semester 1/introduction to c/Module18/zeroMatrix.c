#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int array[row][col];
    int elements=row*col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int count=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j]==0)
            {
                count++;
            }
        }
    }
    if (elements==count)
    {
        printf("Zero Matrix\n");
    }
    else
    {
        printf("Not Zero Matrix\n");
    }
    return 0;
}