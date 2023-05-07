#include<stdio.h>
void main()
{
    char arr[10],brr[10];
    int i=0,j=0,k=0;
    printf("Enter two string\n");
    gets(arr);
    gets(brr);
    while(arr[i]!='\0')
    {
        if(arr[i]==brr[j])
        {
            k=1;

        }
        else
        {
            k=0;
            break;
        }
        i++;
        j++;
    }
    if(k==0)
    printf("Not same\n");
    else
    printf("Same\n");
}