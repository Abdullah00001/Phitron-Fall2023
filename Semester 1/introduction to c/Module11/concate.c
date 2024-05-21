#include <stdio.h>
#include <string.h>
int main() {
    
    char a[100],b[100];
    scanf("%s %s",a,b);
    // behind the scene of strcat
    // int v=strlen(a),x=strlen(b);
    // for (int i = 0; i <=x; i++)
    // {
    //     a[v]=b[i];
    //     v++;
    // }
    // printf("%s %s\n",a,b);
    // printf("%d",v);
    strcat(a,b);
    printf("%s %s",a,b);

    return 0;
}