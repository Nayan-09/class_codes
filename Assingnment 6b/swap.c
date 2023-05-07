#include<stdio.h>
void main()
{
    int a=5,b=9,c;
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
}