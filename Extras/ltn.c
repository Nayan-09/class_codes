#include<stdio.h>
void main()
{
    int a=5,b=6,c=9;
    if(a>b && a>c)
    printf("%d",a);
    else if(b>a && b>c)
    printf("%d",b);
    else
    printf("%d",c);
}