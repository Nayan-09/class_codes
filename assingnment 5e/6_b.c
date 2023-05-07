#include<stdio.h>
void main()
{
    int i=0,space,j;
    for(i=5;i>=0;i--)
    {
        for(space=5;space>i;space--)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i+1);j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}