#include<stdio.h>
void main()
{
    int i=1,count=0,count2=0,m,e,s;
    while(i<=10)
    {
        printf("Enter marks of maths, english and science\n");
        scanf("%d%d%d",&m,&e,&s);
        if((m+e+s/300)*100>=95)
        {
            count=count+1;
        }
        else if((m+e+s/300)*100>=90)
        {
            count2=count2+1;
        }
        i++;
    }
    printf("Total no of student who score 95 per is %d\n",count);
    printf("Total no of student who score 90 per is %d\n",count2);
}