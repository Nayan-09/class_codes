#include<stdio.h>
#include<math.h>
void main()
{
    int i=0,get,x=86,n=20,an;
    float no,sum=0;
    for(i=1;i<=n;i++)
    {
        an=2+(i-1)*3;
        //printf("%d ",an);
        no=x/an;
        sum=sum+no;
    }
    printf("%f ",sum);
}