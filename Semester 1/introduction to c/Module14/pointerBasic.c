#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int * p =&x;
    printf("%p\n",p);
    // dereference
    printf("%d\n",*p);
    *p=10;
    printf("%d",x);
    return 0;
}