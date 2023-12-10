#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sub=row-1;
    int flag=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i+j==sub)
            {
                if (arr[i][j]!=1)
                {
                    flag=0;
                }
                continue;
            }
            if (arr[i][j]!=0)
            {
                flag=0;
            }
            
        }
        
    }
    if (flag==1)
    {
        printf("Secondary DIagonal Unit Matrics\n");
    }
    else
    {
        printf("Not Secondary Diagonal Matrics\n");
    }
    
    return 0;
}