#include<stdio.h>
void main()
{
    int a=5,fact=0,i,pro=1;
    for(i=1;i<=a;i++)
    {
       // pro=i;
        pro=pro*i;
    }
    printf("Fact is %d",pro);
}