#include <stdio.h>
void rcrsn(int i)
{
    if (i==6) return;
    rcrsn(i+1);
    printf("%d\n",i);
}
int main()
{
    int val;
    scanf("%d",&val);
    rcrsn(val);
    return 0;
}