#include<stdio.h>
void main()
{
    int a=2314,b,sum=0;
    while(a!=0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("%d",sum);
}