#include<stdio.h>
int add(int a,int b);
void main()

{
    int x,y,z,p,q,r;
    printf("Enter 4 number\n");
    scanf("%d%d%d%d",&x,&y,&p,&q);
    z=add(x,y);
    r=add(p,q);
    printf("%d and %d",z,r);

}

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}