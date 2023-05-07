#include<stdio.h>
int add(int,int);
void main()
{
    int a=5,b=9,c=0;
    c=add(a,b);
    printf("Sum is %d",c);
}

int add(int x,int y)
{
    int z;
    z=x+y;
    return z; 
}