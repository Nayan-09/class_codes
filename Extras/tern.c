#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two number\n");
    //scanf("%d%d",&a,&b);
    a=5;
    b=6;
    a>b ? printf("%d is greater then %d",a,b) : printf("%d is greater then %d",b,a);
}