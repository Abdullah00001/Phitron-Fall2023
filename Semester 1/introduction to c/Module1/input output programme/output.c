#include <stdio.h>

int main() {


//variable for integer value

 int a , b;

 //variable for floating value

 float c , d;
//variable for character value

char itz , ifz;

//user will get you percent type number
int e , f;
char g;

//integer value input and output

 scanf("%d %d", &a , &b);
 //c = a + b;
 printf("%d\n%d\n", a , b);
 //printf("%d", c);


 //floating value input and output

 scanf("%f %f", &c , &d);

printf("%0.6f\n%0.6f\n", c , d);

//character value input output

scanf(" %c %c", &itz , &ifz);
printf(" %c\n%c\n", itz , ifz);

//how to print percent?
//its have 2 way.like take a variable for take percent as character

scanf("%d%c %d%c", &e , &g , &f , &g);
printf("%d%%\n%d%%\n", e , f);
//or you can tell scanf please show a percent for me
scanf("%d%% %d%%", &e , &f);
printf("%d%%\n%d%%", e , f);

 return 0;
}