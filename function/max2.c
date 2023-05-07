#include<stdio.h>
void max(int,int);
void main()
{
    int a,b,c;
    printf("Enter a two number\n");
    scanf("%d%d",&a,&b);
    max(a,b);
    
}

void max(int a,int b)
{
   if(a>b)
   printf("%d ",a);
   else
   printf("%d",b);
    
}