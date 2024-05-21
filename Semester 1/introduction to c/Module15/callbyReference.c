#include <stdio.h>
void emni(int *ptr)
{
    *ptr=200;
}
int main()
{
    int X;
    scanf("%d",&X);
    emni(&X);
    printf("%d\n",X);
    return 0;
}