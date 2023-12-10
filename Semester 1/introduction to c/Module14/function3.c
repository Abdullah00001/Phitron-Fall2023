#include <stdio.h>
void sum(int a,int b)
 {
    int sum=a+b;
    
    printf("%d\n",sum);
    return;
 }
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}