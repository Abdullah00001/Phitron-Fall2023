#include <stdio.h>

int main() {
 
 /******************************************
  dealing with floating value
 *******************************************/

 /*****************************************
  here we will declare vriable and assign 
  the value at a time
 ******************************************/
 int num=12345,num1=123;

float sum0;

sum0=num*1.0/num1;

printf("%0.5f\n",sum0); 

/*********************************************
 here we will take input from user and give him
 his expected floating value that he looking for
***********************************************/
int num2,num3;
float sum1;
scanf("%d %d", &num2 , &num3);
sum1=num2*1.0/num3;
printf("%0.4f\n",sum1);

/******************************************
  dealing with mod value
 *******************************************/

/*****************************************
  here we will declare vriable and assign 
  the value at a time
 ******************************************/
int num4=5,num5=4,mod;

mod=num4%num5;
printf("%d\n",mod);

/*********************************************
 here we will take input from user and give him
 his expected floating value that he looking for
***********************************************/

int num6,num7,mod0;

scanf("%d %d", &num6 , &num7);

mod0=num6%num7;

printf("%d\n",mod0);


return 0;
}