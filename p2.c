#include<stdio.h>
void main()
{
  int i=1,j=1,k=1;
  int n=5;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-i;j++)
        {

            printf(" ");
        }
        for( k=1;k<=i;k++)
        {

            printf("* ");
        }
        printf("\n");
    }
}
