#include<stdio.h>
void main()
{
    int a[20];
    float cel;
    printf("Enter 20 numbers\n");
    for(int i=0;i<20;i++)
    scanf("%d",&a[i]);

    
    for(int i=0;i<20;i++)
    {
        cel=(((a[i]-32))/9)*5;
        printf("%f\n",cel);
    }

   
  

}