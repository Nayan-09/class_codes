#include<stdio.h>
#include<string.h>
void main()
{
    char name[20],name1[10];
    int len=0;
    printf("Enter  name\n");
    gets(name);
    //gets(name1);
    strcpy(name1,name);
    puts(name1);
    //printf("length is %d",len);

}