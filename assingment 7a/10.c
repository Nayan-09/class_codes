#include<stdio.h>
void add(int,int);
void main()
{
    int a=5,b=9,c=0;
    add(a,b);
   // printf("Sum is %d",c);
}

void add(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("%d %d",x,y);
}