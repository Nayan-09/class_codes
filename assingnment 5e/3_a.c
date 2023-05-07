#include<stdio.h>
void main()
{
    int i=0,space=4,j=0;
    for(i=0;i<=4;i++)
    {
        for(space=4;space>=i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}