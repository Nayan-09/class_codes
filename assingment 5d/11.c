#include<stdio.h>
#include<math.h>
void main()
{
    int a=9474,digit,sum=0,count=0;
    int b=a;
    while(a>0)
    {
        digit=a%10;
        count=count+1;
        a=a/10;
    }
    a=b;

    while(a>0)
    {
        digit=a%10;
        sum=sum+pow(digit,count);
        a=a/10;
    }

    if(sum==b)
    printf("Armstrong no %d\n",b);
    else
    printf("Not a Armstrong no %d\n",b);
    

}