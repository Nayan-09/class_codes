#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,D,r1,r2;
    a=1;
    b=-3;
    c=-4;
    D=b*b-4*a*c;
    printf("Determinant %f\n",D);
    if(D>0)
    {
        printf("Real and Unequal roots \n");
        r1=(-b+sqrt(D))/2*a;
        r2=(-b-sqrt(D))/2*a;
        printf("Root are %f and %f\n",r1,r2);
    }
    if(D==0)
    {
        printf("Real and equal roots \n");
        r1=(-b+sqrt(D))/2*a;
        r2=(-b-sqrt(D))/2*a;
        printf("Root are %f and %f\n",r1,r2);
    }
    if(D<0)
    {
        printf("Imaginary are roots \n");
        
        
    }
}