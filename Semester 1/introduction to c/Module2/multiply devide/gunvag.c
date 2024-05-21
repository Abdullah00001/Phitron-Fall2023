#include <stdio.h>

int main() {
 /**********************
 here we will multiply
 **********************/


/******************************
here we declear value and initialise that and we make it multiply
*******************************/
 int num  = 3456;
 int num0 = 345;
 int sum0;

 sum0 = num * num0;

 printf("%d\n",sum0); 
 
/****************************
here we will take input from user.and deal with them
*****************************/

int num1;
int num2;
int sum1;

scanf("%d %d", &num1 , &num2);

sum1=num1*num2;

 printf("%d\n", sum1);

 /*********************** 
 here we will devide
 ***************************/

/***************************
here we declear value and initialise that and we make it multiply
******************************/
int num3 = 4000000;
int num4 = 200;
int sum2;

sum2=num3/num4;
printf("%d\n",sum2);

/****************************
here we will take input from user.and deal with them
*****************************/
int num5;
int num6;
int sum3;

scanf("%d %d", &num5 , &num6);

sum3=num5/num6;

printf("%d\n", sum3);

 return 0; 
}