#include<stdio.h>
#include<string.h>
void main()
{
    char name[10];
    int len=0;
    printf("Enter your name\n");
    gets(name);
    len=strlen(name);
    printf("length is %d",len);

}