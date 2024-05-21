#include <stdio.h>
void rcrsn(int i)
{
    if(i==0) return;
    printf("%d ",i);
    rcrsn(--i);
}
int main()
{
    int i;
    scanf("%d",&i);
    rcrsn(i);
    return 0;
}