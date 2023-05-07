#include<stdio.h>
void main()
{
    int i=0;
    float get,sum=0,no=0.0,no2=0.0;
    for(i=0;i<=19;i++)
    {
        no=i+0.0;
        no2=i+1;
        get=no/no2;
        sum=sum+get;

    }
    printf("%f ",sum);
}