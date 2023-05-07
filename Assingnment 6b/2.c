#include<stdio.h>
void main()
{
  int n=10;
    int arr[10]={45,4,3,34,54,34,67,89,9,78};
    int temp;
    // Taking input from user
    //printf("Enter how many element you want to eneter\n");
    //scanf("%d",&n);
    //printf("Enter your array size\n");
    //for(int i=0;i<n;i++)
    //scanf("%d",&arr[i]);

   for(int j=0;j<n;j++){
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }}
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}