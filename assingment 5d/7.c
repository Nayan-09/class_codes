#include<stdio.h>
void main()
{
    int no=948,even=0,odd=0,count=0,get;
    while(no>0)
    {
        get=no%10;  // digit
        if(get%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
        no=no/10;  // shift
        count=count+1;


    }
    printf("even digit no is %d\n",even);
    printf("odd digit no is %d\n",odd);
    printf("total digit no is %d\n",count);
}