#include<stdio.h>
#include<math.h>
void main()
{
    int  i=0,a=2,n;
    float sum=0,get,no=1;
     printf("Enter the value of a and n\n");
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        get=pow(i,i);
        //printf("%f ",get);
       sum=sum + get/no;
        no=pow(a,i);
    }
    printf("%f",sum);
}