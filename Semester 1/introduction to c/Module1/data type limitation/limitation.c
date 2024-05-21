#include <stdio.h>

int main() {

//integer number limitation check.integer number can take 4 byte of memory in ram
//4 byte is equal 32 bit.1byte=8bit.32 bit have 10 digit of number
int num1 = 1000000000;
printf("%d\n", num1);
/******************
long long integer number take 8 byte memory in ram.8 byte= 64 bit.and as we know that relation (2^n-1) so (2^64-1=18,446,744,073,709,551,616)( 20 digit of number).that means long long int can take and give maximum 20 digit of number
******************/
long long num2 = 1000000000000000000;
printf("%lld\n", num2);
/*
integer can take maximum 9 digit value. like (2^32-1)
the relation is (2^n-1)
*/
 
 //float number limitation check
float num3 = 0.9458633;
printf("%0.7f\n", num3);
/*
in that case float can take maximum 8 digit before and after quarter like 345.90809 0r 0.1234567
*/

double num4 = 9.00000000000000;
printf("%0.17lf", num4);
/*
double like long long integer .double can take maximum 15 digit of number before and after quarter.
*/







return 0;
}