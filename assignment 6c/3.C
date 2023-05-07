#include<stdio.h>
#include<string.h>
int main()
{
    char name[10],name1[10];
    int len=0;
    printf("Enter  name\n");
    gets(name);
    gets(name1);
    strcat(name,name1);
    puts(name);
    //printf("length is %d",len);
  return 9;
}