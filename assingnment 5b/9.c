#include<stdio.h>
void main()
{
    int i=0,x1=8,an,a=2;
    float sum=0,x;
    for(i=1;i<=20;i++)
    {
        an=a+(i-1)*3;
        //printf("%d ",an);
        x=x1/an;
        sum=sum+x;
    }
    printf(" %f",sum);
}