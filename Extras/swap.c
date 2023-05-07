#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter two number\n");
 scanf("%d%d",&a,&b);
 c=a;  // holding the value
 a=b;  // assinging the b value in a
 b=c;  // assinging the value in a in b
 printf("a = %d\nb = %d ",a,b);
}