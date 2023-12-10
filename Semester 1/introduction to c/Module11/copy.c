#include <stdio.h>
#include <string.h>
int main() {
    // Your code here
    char a[100],b[100];
    scanf("%s %s",a,b);
    //jokhon amar specific index porjnto value lagbe tkhn loop er maddhome copy korte hbe
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[i]=b[i];
    // }

    //r jokhon amar ekta array er mddhe onno ekta arry er sob elements copy korte hbe tkhn strcpy() use korte hbe
    strcpy(a,b);
    printf("%s %s\n",a,b);
    
    return 0;  
}