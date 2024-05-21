#include <stdio.h>
#include <string.h>
int main() {
    // Your code here
    char A[100],B[100];
    scanf("%s %s",A,B);
    //behind the scene of scrmp()
    // int i=0;
    // while (1)
    // {
    //     if (A[i]=='\0' && B[i]=='\0')
    //     {
    //         printf("they are same\n");
    //         break;
    //     }
    //     else if (A[i]=='\0')
    //     {
    //         printf("a is smaller\n");
    //         break;
    //     }
    //     else if (B[i]=='\0')
    //     {
    //         printf("b is amller\n");
    //         break;
    //     }
    //     if (A[i]==B[i])
    //     {
    //         i++;
    //     }
    //     else if (A[i]<B[i])
    //     {
    //         printf("a hocche choto\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("b hocche choto\n");
    //         break;
    //     }
    // }
    int v=strcmp(A,B);
    if (v<0)
    {
        printf("a is smaller\n");
    }
    else if (v>0)
    {
        printf("b is smaller\n");
    }
    else
    {
        printf("they are saame\n");
    }
    
    return 0;
}