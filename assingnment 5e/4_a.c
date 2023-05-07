#include<stdio.h>
void main()
{
    int i=0,j=0;
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}