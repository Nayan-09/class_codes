#include<stdio.h>
void main()
{
    int a[20],small=-4747,b=0,big=9485784,c=0;
    
   // printf("Enter 20 numbers\n");
    //for(int i=0;i<20;i++)
    //scanf("%d",&a[i]);
    int arr[6]={6,464,7,56,78,9};

    
    for(int i=0;i<6;i++)
    {
        b=arr[i];
        for(int j=2;i<b;j++)
        {
            if(b%j!=0)
            printf("%d ",b);
            break;

        }
    
    
    }

   
  

}