#include<stdio.h>
void main()
{
  int a,b,c;
  a=4,b=9,c=798;
  //a>b && a>c ? printf("%d",a): b>c && b>a ? printf("%d",b): (c>a && c>b ? printf("%d",c));
  a>b && a>c ? printf("%d",a):printf("");
  b>c && b>a ? printf("%d",b):printf("");
  c>a && c>b ? printf("%d",c):printf("");

}