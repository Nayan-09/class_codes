#include<stdio.h>
void main()
{
    int a=4;
    int b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a %d\n",a);
    printf("b %d\n",b);
}