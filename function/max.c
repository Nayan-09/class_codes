#include<stdio.h>
int add(int,int);
void main()
{
    int a,b,c;
    printf("Enter a two number\n");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Max is %d",c);
}

int add(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}