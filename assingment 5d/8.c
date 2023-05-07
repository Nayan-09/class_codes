#include<stdio.h>
void main()
{
    int a=453,digit=0,sum=0,no;
    float j=0.1;
    int b=a,c=a;
   while(a>0)
   {
    digit=a%10;
    a=a/10;
    j=j*10;

    //printf("%d",j);
   }
  //printf("\n%f ",j);
   a=b;
  while(a>0)
  {
    digit=a%10;
    no=j*digit;
    sum=sum+no;
    j=j/10;
    a=a/10;
  }
  printf("\n Difference is %d ",sum-c);

}
