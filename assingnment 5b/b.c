#include<stdio.h>
#include<math.h>
void main()
{
    int a=2,i;
    float no,sum=0,get;
   // printf("Enter the value of a");
   // scanf("%d",&a);
     // initilization
    for(i=1;i<=10;i++)
    {
        get=pow(a,i);
       // printf("%f ",get);
        sum=sum+(get/i);
    }
   printf("Sum is %f",sum);
}