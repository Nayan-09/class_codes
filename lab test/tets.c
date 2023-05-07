#include<stdio.h>
void fact(int);
void main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    fact(a);

}

void fact(int a)
{
    int pro=1;
    for(int i=a;i>0;i--)
    pro=pro*i;
    printf("factorial is %d",pro);

}
