#include<stdio.h>
#include<math.h>
void main()
{
    int x=2,i,sum=0,odd,even,sum2=0;
    for(i=1;i<=10;i++)
    {
        odd=2*i+1;
        even=2*i;
        sum=sum + pow(x,odd);
        sum2=sum2 + pow(x,even);
    }
    printf("Sum of series is %d",sum-sum2);

    // int i,no=1,j;
    // for(i=0;i<=5;i++)
    // {
    //    j=i;
    //     no=pow(10,i);
    //     no=no+j;
     
    //     printf("%d ",no);
    // }
}