#include<stdio.h>
void main()
{
    int i,j,space,k;
    for(i=1;i<=5;i++)
    {
        for(space=4;space>=i;space--)
        {
            printf(" ");
        }
        k=65;
        for(j=1;j<=i;j++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
}