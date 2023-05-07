#include<stdio.h>
#include<math.h>
void main()
{
    int m,n;
    printf("enter 2 Ranges\n");
    scanf("%d%d",&m,&n);
    while(m<=n)
    {
        
        if(sqrt(m)==pow(m,0.5))
        {
            printf(" ");
            printf(" %d ",m);
        }
        m++;
    }
}