#include<stdio.h>
#include<math.h>
void main()
{
    int i,a=-2,j=0,k=0;
    float no1,no2;
    float get,sum1=0,sum2=0;
    for(i=0;i<=10;i++)
    {
        j=2*i;
        k=2*i+1;
        no1=pow(a,j);  // even
        //printf("%f ",no1);

        sum1=sum1+no1;  // even sum
        

        no2=pow(a,k);   // odd
       // printf("%f ",no2);
        sum2= sum2 + no2;  // odd sum

    }
   printf("Sum is %f ",(sum1-sum2));
}