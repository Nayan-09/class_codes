#include<stdio.h>
void main()
{
    int no=-31;
    if(no>0 && no%2==0)
    printf("%d %d %d",no+2,no+4,no+6);
    else if(no<0 && no%2!=0)
    printf("%d %d %d",no-2,no-4,no-6);
}