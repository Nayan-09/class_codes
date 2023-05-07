#include<stdio.h>
#include<math.h>
void main()
{
    int i,no,a=2,sum=0,n;
    printf("Enter the value of a and n\n");
    scanf("%d%d",&a,&n);
    no=a;

    for(i=2;i<=n;i++){
    no=pow(a,i);
    sum=sum+no;
    }
    printf("Sum is %d",sum);
}