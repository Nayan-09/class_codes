#include<stdio.h>
void main()
{
    int i,j,s,k=0;


    
    for(i=0;i<5;i++)
    {
        for(s=0;s<i;s++)
        {
            printf(" ");
        }
        k=4-i;
        for(j=0;j<2*k+1;j++)
        {
            printf("*");

    
        }
        printf("\n");
    }
} 