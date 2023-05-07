#include<stdio.h>
void main()
{
    char arr[5]={"Echo"};
    int count=0;
   // gets(arr);
   // puts(arr);
   int i=0;
   while(arr[i]!='\0')
   {
    count++;
    i++;
   }
    printf("Coutn is %d",count);
}