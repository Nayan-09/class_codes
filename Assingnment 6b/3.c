#include<stdio.h>
void main()
{
  int n=10;
    int arr[10]={45,4,3,34,54,34,67,89,9,78};
    int search=9;
    int k,index;
    // Taking input from user
    //printf("Enter how many element you want to eneter\n");
    //scanf("%d",&n);
    //printf("Enter your array size\n");
    //for(int i=0;i<n;i++)
    //scanf("%d",&arr[i]);

   for(int j=0;j<n;j++){
    if(arr[j]==search)
    {
        index=j;
        k=1;
        break;
    }
 }
    if(k==1){
    printf("%d is present at %d\n",search,index);
  }
  else 
  {
    printf("%d is not present ",search);
  }
  
  
}