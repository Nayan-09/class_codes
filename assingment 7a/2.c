#include<stdio.h>
int max(int,int);
void main()
{
    int a=5,b=9,c=0;
    c=max(a,b);
    printf("Max is %d",c);
}

int max(int x,int y)
{
    int z;
    if(x>y)
    return x;
    else
    return y; 
}