#include<stdio.h>
void main()
{
    int a=59,sum=0,pro=1,digit;
    int b=a;
    printf("Enter a number\n");
    scanf("%d",&a);
    while(a>0)
    {
        digit=a%10;
        sum=sum+digit;
        pro=pro*digit;
        // update
        a=a/10;
    }
    a=b;

    if(sum+pro==a)
    printf("Special 2-digit number is %d",a);
    else
    printf("Not a Special 2-digit number is %d",a);
}