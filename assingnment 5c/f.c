#include<stdio.h>
void main()
{
    int i=0,no1,no2;
    float get=1,sum=0;
    for(i=1;i<19;i++)
    {
        no1=i;
        no2=i+1;
        get=no1*no2;
        sum=sum+get;

    }
    printf("%f",sum);
}