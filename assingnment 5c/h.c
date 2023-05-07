#include<stdio.h>
void main()
{

    // 1+ 1*2 + 1+1*2+1*2*3
    int i=0,sum=0,pro,n=9,no=1;
    printf("Enter the vaule of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        no=no*i;
        printf("%d ",no);  
        sum=sum+no;

    }

   printf("\n Sum is %d",sum);
}