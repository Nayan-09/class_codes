#include<stdio.h>
void circle(int);
void main()
{
    int a=5,b=9,c=0;
    circle(a);
    //printf("Sum is %d",c);
}

void circle(int r)
{
    int dia;
    float area;
    float peri;
    printf("Diameter is %d\n",r*2);
    printf("Circumference is %f\n",2*3.14*r);
    printf("Area of is %f",3.14*r*r);
}