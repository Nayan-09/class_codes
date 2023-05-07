#include<stdio.h>
#include<math.h>
void max(int*);
void main()
{
    int a=153,b=9,c=0;
    max(&a);
}

void max(int *xx)
{
    int x=*xx;
    int cnt=0,p=0,y=x,sum=0,z=0,digit=0;
    while(x>0)
    {
        digit=x%10;
        cnt++;
        x=x/10;
    }
    //printf("%d",cnt);
   p=cnt;
   //printf("%d %d",pow(4,p),p);
   x=y;
   z=x;
   while(x>0)
    {
        digit=x%10;
        sum=sum+pow(digit,p);
        x=x/10;
    }
    x=z;

   // printf("%d and %d",x,sum);
    if(x==sum)
    {
        printf("Armsrong ");
    }
    else
    printf("NOt a Armstrong");




}
