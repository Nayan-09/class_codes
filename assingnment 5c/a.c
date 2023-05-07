#include<stdio.h>
#include<math.h>
void main()
{
    int i=0,j,sum=0;
    for(i=0;i<=20;i++)
    {
        j=pow(i,2);
        sum=sum+j;
    }
    printf("%d ",sum);
}