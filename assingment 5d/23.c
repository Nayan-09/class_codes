#include<stdio.h>
void main()
{
    int a=127,sum=0,digit;
    
    printf("Enter a number\n");
    scanf("%d",&a);
    int b=a;

    while(a>0)
    {
        digit=a%10;
        sum=sum+digit;
        a=a/10;

    }
    a=b;
    if(a%sum==0)
    printf("Niven No %d\n",a);
    else
     printf("Not Niven No %d\n",a);
}