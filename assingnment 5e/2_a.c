#include<stdio.h>
void main()
{
    int i,j,space;
    for(i=0;i<=4;i++)
    {
        for(space=4;space>=i;space--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}