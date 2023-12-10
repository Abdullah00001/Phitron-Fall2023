#include <stdio.h>
void rcrsn(int i)
{
    if (i==0) return;
    printf("%d\n",i);
    rcrsn(--i);
}
int main()
{
    int val;
    scanf("%d",&val);
    rcrsn(val);
    return 0;
}