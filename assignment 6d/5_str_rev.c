#include<stdio.h>
void main()
{
    char arr[10],a,b,c;
    int count=0,k=0;
    printf("Enter a string\n");
    gets(arr);
    int j=0;

    while(arr[j]!='\0')
    {
       count++;
        j++;

    }
  //  printf("%d",count);
 // printf("%c",arr[count-1]);
    for(int i=0;i<count/2;i++)
    {
        c=arr[k];
        arr[k]=arr[count-1];
        arr[count-1]=c;
    
        count--;
        k++;
    }
    puts(arr);
}