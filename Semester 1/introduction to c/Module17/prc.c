#include <stdio.h>
void rcrsn(int i)
{
    if (i==0) return;
    
    printf("%d\n",i);
    rcrsn(--i);
}
int main()
{
    int N;
    scanf("%d",&N);
    rcrsn(N);
    return 0;
}