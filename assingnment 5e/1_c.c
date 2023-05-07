#include<stdio.h>
void main()
{
    int i=63,j=0;
    for(i=65;i<70;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}