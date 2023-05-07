#include<stdio.h>
void main()
{
    int i=0,a=-82,odd,even;
    float no1,no2,get=0,sum1=0,sum2=0;
    for(i=1;i<=20;i++)
    {
        odd=2*i+1;
        even=2*i;
        no1=a/odd;
        sum1=sum1+no1;
        no2=a/even;
        
        sum2=sum2+no2;
       // printf("%f ",sum);

    }
    printf("%f ",(sum1-sum2));
}