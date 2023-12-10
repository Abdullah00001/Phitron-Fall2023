#include <stdio.h>

int main()
{
    int s;
    int *ptr=&s;
    scanf("%d",&s);
    // *ptr=100;
    // int *ptr2=ptr;
    // *ptr2=100000;
    // printf("%d\n",*ptr2);
    printf("x er memory address %p\n",&s);
    printf("ptr er value %p\n",ptr);
    printf("value of s %d\n",*ptr);
    printf("ptr er memory address %p\n",&ptr);
    return 0;
}