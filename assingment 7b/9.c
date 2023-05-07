#include<stdio.h>
void swap(int* ,int *);
void main()
{
    int a,b;
    a=4;
    b=5;
    // printf("Enter two no\n");
    // scanf("%d%d",&a,&b);
    swap(&a,&b);
}

void swap(int *a,int *b)
{
    int x=*a;
    int y=*b;
    int c;
    c=y;
    y=x;
    x=c;

  printf("%d and %d",x,y);
}