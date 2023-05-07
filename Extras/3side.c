#include<stdio.h>
void main()
{
    int h,p,b;
    h=4,b=5,p=3;
    if(h*h==b*b+p*p || b*b == h*h+p*p || p*p==h*h+b*b)
    printf("Right angled triangle\n");
    else
    printf("not right angle triangle\n");
}