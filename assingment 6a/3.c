#include<stdio.h>
void main()
{
    int a[20],small=-4747,b=0,big=9485784,c=0;
    
   // printf("Enter 20 numbers\n");
    //for(int i=0;i<20;i++)
    //scanf("%d",&a[i]);
    int arr[5]={5,464,7,56,78};

    
    for(int i=0;i<5;i++)
    {
        if(arr[i]>small)
        {
            b=arr[i];
        }
        small=b;
    
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]<big)
        {
            c=arr[i];
        }
        big=c;
    
    }


    printf("Big no is %d\n",small);
    printf("Small no is %d\n",c);

   
  

}