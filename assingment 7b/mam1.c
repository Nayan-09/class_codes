#include<stdio.h>
int fact(int);
void main()
{
    int a,b;
    a=5;
    b=fact(a);
    printf("Factorial is %d",b);
}

int fact(int a)
{
    int f=1;
    if(a==0)
    {
        f=1;
    }
    else
    {
        f=a*fact(a-1);
    }
    return f;
}