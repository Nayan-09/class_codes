#include<stdio.h>
void main()
{
    int i=0,j=0,space=0,k;
    for(i=0;i<5;i++)
    {
        for(space=0;space<i;space++)
        {
            printf(" ");
        }
        k=65;
        for(j=0;j<(5-i);j++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
}