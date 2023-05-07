#include<stdio.h>
void main()
{
    int a[20],sum=0;
    float d,avg;
    
   // printf("Enter 20 numbers\n");
    //for(int i=0;i<20;i++)
    //scanf("%d",&a[i]);
    int arr[5]={89,54,46,45,65};

    
    for(int i=0;i<5;i++)
    {
       sum=sum+arr[i];
    }
    avg=sum/5.0;
    printf("Average is %f",sum/5.0);
    printf("\n");

    for(int i=0;i<5;i++)
    {
        d=sum-arr[i];
        printf("%d is %f\n",arr[i],d);

    }

   
  

}