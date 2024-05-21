#include <stdio.h>
void emni(int x)
{
    printf("%p\n",&x);
}
int main()
{
    int x;
    scanf("%d",&x);
    emni(x);
    printf("%p\n",&x);
    return 0;
}