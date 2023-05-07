#include<stdio.h>
void main()
{
    int a=9,b=3,c=99;
    if(a>b && a>c)
        printf("%d",a);
    else if(b>a && b>c)
        printf("%d",b);
    else if(c>b && c>a)
        printf("%d",c);

}
