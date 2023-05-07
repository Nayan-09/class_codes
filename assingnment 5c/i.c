#include<stdio.h>
void main()
{
    int i=0,n=10,a1,a2,a3,sum=0;
    a1=0;
    a2=1;
    printf("%d %d ",a1,a2);
    for(i=0;i<=n;i++)
    {
        a3=a1+a2;
        printf("%d ",a3);
        // update
        a1=a2;
        a2=a3;

    }
}