#include<stdio.h>
void main()
{
    int no=1,n=100;
    while(no<=n)
    {
        if(no%10==7 && no%7==0)
        {
            printf("%d ",no);
        }
        no++;
    }
}