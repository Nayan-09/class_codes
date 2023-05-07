#include<stdio.h>
void main()
{
    char arr[20],brr[20];
    printf("Enter string\n");
    gets(arr);
    int i=0,count=0;

    // copy the string
    while(arr[i]!='\0')
    {
       
        count++;
        i++;
    }
   // printf("%d",count);
    for(int i=0;i<=count;i++)
    {
        brr[i]=arr[i];
    }
    puts(brr);
}