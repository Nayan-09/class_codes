#include<stdio.h>
void main()
{
    int no ,d,sum=0,count=0,count2=0,sum2=0;
    int i=1;
    while(i<=15)
    {
        printf("Enter a  %d no.\n",i);
        scanf("%d",&no);
        if(no>=0)
        {
            count=count+1;
            sum=sum+no;
        }
        else
        {
            count2=count2+1;
            sum2=sum2+no;
        }
        i++;
    }
    printf("total +ve no is %d\n",count);
    printf("total +ve no is %d\n",count2);
    printf("Sum of +ve no is %d\n",sum);
    printf("Sum of -ve no is %d\n",sum2*(-1));
}