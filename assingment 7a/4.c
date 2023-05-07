#include<stdio.h>
void max(int);
void main()
{
    int a=5,b=9,c=0;
    max(a);
}

void max(int x)
{
    int z;
    if(x%2==0)
    printf("Even\n");
    else
    printf("Odd\n"); 
}