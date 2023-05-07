#include<stdio.h>
void max(int*);
void main()
{
    int a=4,b=9,c=0;
    max(&a);
}

void max(int *xx)
{
    int z;
    int x=*xx;
    for(int i=2;i<x;i++)
    {
    if(x%i==0){
    z=0;
    break;}
    else
    z=1;
    }

    if(z==1)
    {
        printf("prime\n");
        
    }
    else
    printf("Not a prime\n");
}