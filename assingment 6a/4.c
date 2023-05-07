#include<stdio.h>
void main()
{
    int a[20],small=-4747,b=0,big=9485784,c=0;
    
   // printf("Enter 20 numbers\n");
    //for(int i=0;i<20;i++)
    //scanf("%d",&a[i]);
    int arr[10]={5,464,7,56,78,-9,-8,7,5,-23};
   printf("Negatvie no \n");

          for(int i=0;i<10;i++)
    {

        if(arr[i]<0)
        {
            // bigger no ko store karo
            printf("%d ",arr[i]);
        }
    }
    printf("\n");

    printf("Positve no \n");
    for(int i=0;i<10;i++)
    {
        if(arr[i]>=0)
        {
            // bigger no ko store karo
            printf("%d ",arr[i]);
        }
    }

  

   
  

}