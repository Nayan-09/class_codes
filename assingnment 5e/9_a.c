#include<stdio.h>
void main()
{
    int i,j=1,k;
     k=j;
    for(i=0;i<=5;i++)
    {
       
        for(j=1;j<i;j++)
        {
            
            printf("%d ",k);
            k++;
        }
        printf("\n");
    
    }
}