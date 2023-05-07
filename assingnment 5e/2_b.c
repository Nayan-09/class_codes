#include<stdio.h>
void main()
{
    int i,j,space;
    for(i=1;i<=5;i++)
    {
        for(space=4;space>=i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}