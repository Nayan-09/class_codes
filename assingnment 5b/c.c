#include<stdio.h>
void main()
{
    int i,a=2,sum=0,no;
    printf("Enter the value of a");
    scanf("%d",&a);
    for(i=2;i<=20;i++)
    {
        no=a*i;
       // printf("%d",a*i);
        sum=sum+no;
    }
    printf("%d",sum);
}