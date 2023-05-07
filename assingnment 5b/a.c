#include<stdio.h>
void main()
{
    int a=9,i;
    float no,sum=0;
    no=a*a;  // initilization
    for(i=1;i<=10;i++)
    {
        
        //printf("%d ",no);
        sum=sum+no; // sumation
        no=no/i;   // iteration
    }
   printf("Sum is %f",sum);
}