#include<stdio.h>
void main()
{
  int a=9,b=8,c=6;char case1;
  case1 = 'p';
  switch(case1)
  {
    case 's':
    {
    printf("Sum is %d",a+b+c);
    break;
    }
    case 'p':
    {
    printf("Product is %d",a*b*c);
    break;
    }
    default:
    {
    printf("Invalid Character\n");
    break;
    }

  } 
}
