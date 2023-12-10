#include <stdio.h>

int main() {
    // Your code here
    // int n;
    // scanf("%d",&n);
    char a[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%c",&a[i]);
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%c\n",a[i]);
    }
    
    
    return 0;
}