#include<stdio.h>
void main()
{
    int i=0,j=0,space=0;
    for(i=0;i<5;i++)
    {
        for(space=0;space<i;space++)
        {
            printf(" ");
        }
        for(j=1;j<(6-i);j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}