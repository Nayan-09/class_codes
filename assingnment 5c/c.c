#include<stdio.h>
void main()
{
     int i=0,odd;
     float get,sum=0;
     for(i=0;i<=19;i++)
     {
        odd=2*i+1;
        get=1.0/odd;
        sum=sum+get;
     }
     printf("sum is %f",sum);
}