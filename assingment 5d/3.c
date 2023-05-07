#include<stdio.h>
void main()
{
    int i=1,no,count=0;
    while(i<=15)
    {
        printf("Enter a %d no\n",i);
        scanf("%d",&no);
        if(no%5==0)
        {
            if(no%10==0)
            {
                count=count+1;

            }
            else
            {
                printf("%d  \n ",no);

            }
        }
        i++;
    }
    printf("total no ending with zero is %d",count);
}