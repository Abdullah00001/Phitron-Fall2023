#include <stdio.h>
void midle()
{
    printf("midle beginning\n");
    printf("midle end\n");
}
void start()
{
    printf("start beginning\n");
    midle();
    printf("start end\n");
}
int main()
{
    printf("hi anybody there\n");
    start();
    printf("thanks\n");
    return 0;
}