//So 1st I am going to write 1st phase code

#include<stdio.h>
void main()
{
    // create an array
    int a[5]={3,7,2,0,9};
    int c=0,i=1;
    // well i have to swap
    for(int j=0;j<5;j++)
    {
     printf("\n");

    for(int i=0;i<3;i++)
    {
        if(a[i]>a[i+1]){
    c=a[i];
    a[i]=a[i+1];  // So this swap the element
    a[i+1]=c;
        }

    }
     for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    }

    // let run this code
}
