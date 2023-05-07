#include<stdio.h>
void main()
{
    int m=1,n=10,sum1=0,sum2=0;printf("echo\n");
    while(m<=n)
    {
        if(m%2==0)
        {
            sum1=sum1+m;

        }
        else
        {
            sum2=sum2+m;

        }
        m++;
    }
    printf("Sum of Even no is %d\n",sum1);
    printf("Sum of Odd no is %d\n",sum2);
}