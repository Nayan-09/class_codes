#include<stdio.h>
void main()
{
    int a,b;
    a=4;
    b=5;
    a=a+b;  // 9
    b=a-b;  // 9-5=4
    a=-(b-a);   // 4-9=-5
    printf("value of a = %d\n b = %d",a,b);
    
}