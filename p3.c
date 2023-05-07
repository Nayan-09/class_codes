#include<stdio.h>
void main()
{
    int i=1,j=1,l,k;
    int n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        printf("\t");
        for(k=1;k<=i;k++)
        printf("%d\t",k);
        for(l=(i-1);l>0;l--)
        printf("%d\t",l);
       printf("\n");
    }
}