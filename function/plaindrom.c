#include<stdio.h>
void plain(int);
void main()
{
    int a;
   // printf("Enter a number\n");
    //scanf("%d",&a);
    a=6292;
    plain(a);

}

void plain(int a)
{
    int pro=1,digit=0;
    while(a>0)
    digit=a%10;
    pro=pro*10;
    a=a/10;

    printf("Pro is %d",pro);
}