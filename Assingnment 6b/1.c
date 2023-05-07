#include<stdio.h>
void main()
{
    int n=10;
    int arr[10]={45,4,3,34,54,34,67,89,9,78};
    // Taking input from user
    //printf("Enter how many element you want to eneter\n");
    //scanf("%d",&n);
    //printf("Enter your array size\n");
    //for(int i=0;i<n;i++)
    //scanf("%d",&arr[i]);


    for(int i=0;i<n/2;i++)
    {
        int temp;
       // swaping
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}