#include<stdio.h>
void main()
{
  int a,b,c;
  a=78;
  b=78;
  c=78;
  if(a==b && b==c)
    printf("Equilateral triagle\n");
  else if(a==b && a!=c || b==c && b!=a || c==a && c!=b)
    printf("isosceles traingle\n");
  else if(a!=b && b!=c && c!=a)
    printf("scalene triangle\n");

}
