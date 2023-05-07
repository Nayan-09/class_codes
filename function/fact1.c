#include<stdio.h>
int fact(int);
void main()
{
    int a,c;
    printf("Enter a number\n");
    scanf("%d",&a);
    c=fact(a);
    printf("factorial is %d",c);
}

int fact(int a)
{
    int pro=1;
    for(int i=a;i>0;i--)
    pro=pro*i;
    
    return pro;
}