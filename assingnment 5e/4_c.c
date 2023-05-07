#include<stdio.h>
void main()
{
    int i=0,j=0,k;
    for(i=5;i>0;i--)
    {
        k=65;
        for(j=0;j<i;j++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
}