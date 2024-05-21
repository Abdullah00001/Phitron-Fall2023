
#include <stdio.h>

int main()
{
    int s;
    int * p = &s;
    scanf("%d",&s);
    // priting the s location in memory
    printf("%p\n",&s);
    // printing s value using its pointer
    printf("%d\n",*p);
    // change the value of s using its pointer
    *p=1000;
    printf("%d\n",*p);

    return 0;
}