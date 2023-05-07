#include<stdio.h>
void main()
{
    int i,a,b,c,sum=0;
    printf("Enter your option\n1 Fibonacci Seeries\n2 digit sum\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        a=0;
        b=1;
        for(i=1;i<=10;i++)
        {
            c=a+b;
            a=c;
            b=c-b;

            printf("%d ",c);


        }


        break;
        case 2:
        a=24234;
        while(a>0)
        {
            c=a%10;
            sum=sum+c;
            a=a/10;
            
        }
        printf("Sum is %d",sum);


        break;
        default:
        printf("Invalid \n");2
        break;
    }
}