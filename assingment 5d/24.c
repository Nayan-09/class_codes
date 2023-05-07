#include<stdio.h>
void main()
{
    int a=1124,sum=0,pro=1,digit;
    int b=a;
    while(a>0)
    {
        digit=a%10;
        sum=sum+digit;
        pro=pro*digit;
        a=a/10;
    }
    a=b;

  // printf("%d",pro);
    if(sum==pro)
    printf("Spy no %d",a);
    else
    printf("not spy no %d",a);
        
 }