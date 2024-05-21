#include <stdio.h>
#include <string.h>
int main() {
    
    //un standerd way
    // char a[28];
    // gets(a);
    // printf("%s\n",a);
    //STANDERD WAY
    char b[30];
    fgets(b,18,stdin);
    b[16]='\0';
    printf("%s",b);

    return 0;
}