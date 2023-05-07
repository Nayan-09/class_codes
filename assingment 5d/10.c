#include<stdio.h>
void main()
{
    int a=9548,digit,sum=0;
    a=121;
    int b=a;
    float j=0.1;
    while(a>0)
    {
        digit=a%10;
        a=a/10;
        j=j*10;
    }
    //printf("%f",j);
    
    a=b;
    while(a>0)
    {
        digit=a%10;
        sum=sum+digit*j;
        j=j/10;
        a=a/10;
    }
    printf("%d \n",sum);

    if(b==sum)
    {
        printf("%d is palindrome\n",b);
    }
    else
    printf("%d is not palindrome\n",b);



}