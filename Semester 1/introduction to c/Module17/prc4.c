#include <stdio.h>
int rcrsn(char *array,int i)
{
    if (array[i]=='\0') return 0;
    int len=rcrsn(array,++i);
    return len+1;
}
int main()
{
    int N;
    scanf("%d",&N);
    char S[100];
    scanf("%s",&S);
    int len=rcrsn(S,N);
    printf("%d\n",len);
    return 0;
}