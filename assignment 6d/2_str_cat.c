#include<stdio.h>
void main()
{
    char arr[20],brr[10];
    gets(arr);
    gets(brr);
    
    int i=0,count=0;
    while(arr[i]!='\0')
    {
        count++;
        i++;
    }
   

    int l=0,count2=0;
    while(brr[l]!='\0')
    {
        count2++;
        l++;
    }
   // printf("%d",count2);


    int j=0;
    //printf("%c\n",arr[count]);
    
    for(int i=0;i<=count2;i++)
    {
    arr[count]=brr[j];
    count++;
    j++;

    }
    puts(arr);
}