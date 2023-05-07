#include<stdio.h>
#include<math.h>
void main()
{
    int a=443;
    if(a%10==a)
    printf("%d",a*a);
    else if(a%100==a)
    printf("%f",sqrt(a));
    else if(a%1000==a)
    printf("%f",cbrt(a));
    else
    printf("The no ented is more than three digits");

}