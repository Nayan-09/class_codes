#include<stdio.h>
#include<math.h>
void main()
{
    int a=1234,b,c,i,sum=0,d;
    for(;a!=0;a)
    {
     b=a%10;
     a=a/10;
     i=0;
     d=pow(10,i);
     c=d+b;
     sum=sum+c;
     //printf("%d ",b); // 4 it will 
     //c=a/10;
    i++;


    }
    printf("%d",sum);
    
}