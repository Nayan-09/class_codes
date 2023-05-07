#include<stdio.h>
#include<math.h>
void main()
{

    int a,b,sum=0,z,digit,count=0;
    printf("Enter a no \n");
    scanf("%d",&a);
    //a=153;

    b=a;
    while(a>0)
    {
        digit=a%10;
        count=count+1;
        a=a/10;


    }
    printf("%d count\n",count);
    a=b;
    printf("a is %d",a);
    while(a>0)
    {
        digit=a%10;
        z=pow(digit,count);
        sum=sum+z;
        a=a/10;
    }
    printf("Sum is %d\n",sum);
    a=b;
    if(sum==a)
    printf("Armstrong no %d ",a);
    else
    printf("Not a Armstrong no %d",a);
}
