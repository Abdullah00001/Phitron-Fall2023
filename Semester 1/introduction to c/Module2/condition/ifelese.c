#include <stdio.h>

int main() {
 
 int price = 120;
 int a;
 scanf("%d", &a);

 if (a>=price)
 {
    printf("you can buy this.\n");
 }
 else{
    printf("sorry.you didnt buy this\n");
 }


 if (a<price)
 {
    printf("not enough money\n");
 }
 else
 {
    printf("you can\n");
 }





 return 0;
}