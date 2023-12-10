// #include <stdio.h>
// void emni(int *ar,int sz)
// {
//     ar[2]=100;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     emni(arr,n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
       
//     return 0;
// }
#include <stdio.h>
int main()
{

    int ary[4] = {1, 2, 3, 4};

    int *p;

    p = ary + 3;

    *p = 5;

    printf("%d\n", ary[3]);

}