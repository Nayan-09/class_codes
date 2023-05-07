#include<stdio.h>
#include<math.h>
void main()
{
    int i=0,no,n=4;
    float get,sum=0;
    for(i=0;i<=n;i++)
    {
        no=pow(2,i);
        get=1/no;
        sum=sum+get;

    }
    printf("%f ",sum);
}