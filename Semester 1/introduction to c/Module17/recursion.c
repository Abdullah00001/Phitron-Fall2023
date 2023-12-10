#include <stdio.h>
void rcrsn(int i)
{
    if (i==6) return;
    printf("%d\n",i);
    rcrsn(i+1);
}
int main()
{
    int in;
    scanf("%d",&in);
    rcrsn(in);
    return 0;
}