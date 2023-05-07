#include<stdio.h>
#include<string.h>
int main()
{
    char name[10],name1[10];
    int t;
    printf("Enter  name\n");
    gets(name);
    gets(name1);
    t=strcmp(name,name1);
    if(t==0)
    printf("Same string");
    else
    printf("Not same string");
   // puts(name);
    //printf("length is %d",len);
  return 9;
}