#include <stdio.h>
int len(char *array,int i)
{
    if(array[i]=='\0') return 0;
    int stringl=len(array,i+1);
    return stringl+1;
}
int main()
{
    char s[100];
    scanf("%s",&s);
    int stringl=len(s,0);
    printf("%d\n",stringl);
    return 0;
}