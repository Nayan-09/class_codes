#include<stdio.h>
void main()
{
    int i,space,j,no=8;
    int echo=no/2,k;
    k=no-1;
    for(i=0;i<=no;i++)
    {
        if(i>no/2)
        {    
            for(space=echo;space>=0;space--)
            {
                printf(" ");
            }
            
            for(j=1;j<=k;j++)
            {
                printf("*");
            }
            k=k-2;
            printf("\n");
            echo++;
        }

        if(i>no/2)
        continue;
        for(space=no;space>i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}