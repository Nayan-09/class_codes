#include<stdio.h>
void main()
{
    // 2-4+6-8-10 .. . -20 
    
    int i=0,no,no2;
    float get,sum=0;
    for(i=1;i<=20;i++)
    {
        no=2+(i-1)*4;   //2 6 10
        //printf("%d ",no);
        no2=4+(i-1)*4;  // 4 8 12
         // printf("%d ",no2);
        get=no-no2;
        sum=sum+get;

    }
    printf("%f ",sum);
}