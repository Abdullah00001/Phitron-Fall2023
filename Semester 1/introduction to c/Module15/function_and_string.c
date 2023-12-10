#include <stdio.h>
void emne(char c[])
{
    gets(c);
}
void emni(char c[])
{
    printf("%s\n",c);
}
int main()
{
    char s[100];
    emne(s);
    emni(s);
    return 0;
}