#include<stdio.h>
void main()
{
    int i=0;
    float get,sum=0;
    for(i=1;i<=20;i++)
    {
        get=1.0/i;
       // printf("%f ",get);
        sum=sum+get;
    }
    printf(" sum is %f ",sum);
}