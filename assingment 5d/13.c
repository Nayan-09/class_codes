#include<stdio.h>
void main()
{
    int a=5,i,b;
    for(i=2;i<a;i++)
    {
        if(a%i==0){
        b=0;
        break;
        }
        else
        b=1;
    }
    if(b==1)
    printf("prime no %d\n",a);
    else
    printf("not a prime no %d \n",a);
    
}