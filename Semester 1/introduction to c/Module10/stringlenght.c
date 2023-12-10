#include <stdio.h>
#include <string.h>
int main() {
    // Your code here
    char a[100];
    scanf("%s",a);
    // int count=0;
    // for (int i = 0; a[i]!='\0'; i++)
    // {
    //     count++;
    // }
    // int i=0;
    // while (a[i]!='\0')
    // {
    //     count++;
    //     i++;
    // }
    int stlenght= strlen(a);
    
    printf("%d\n",stlenght);
    return 0;
}