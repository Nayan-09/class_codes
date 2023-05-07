#include<stdio.h>
#include<math.h>
void main()
{
    int i=0,n=5,a=2;
    float get,no,sum=0;
    for(i=0;i<=n;i++)
    {
        get=pow(a,i);
        //printf("%f ",get);
        no=1/get;
        //printf("%f ",no);
        sum=sum+no;
    }
    printf("%f ",sum);
}