#include<stdio.h>
#include<math.h>
void main()
{
    int i=0,n=5;
    float no,no1,no2,sum,a=2;
     printf("Enter the value of a and n\n");
    scanf("%d%d",&a,&n);
    for(i=0;i<=n;i++)
    {
        no=2*i+1;
        no2=pow(no,2);
        //printf("%f ",no2);
        no1=pow(a,i);
        // printf(" %f ",no1);
        sum=sum+(no2/no1);

    }
    printf("%f ",sum);
}