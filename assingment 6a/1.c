#include<stdio.h>
void main()
{
    int a[20],oddSum=0,evenSum=0;
    printf("Enter 20 numbers\n");
    for(int i=0;i<20;i++)
    scanf("%d",&a[i]);

    // i have take all 20 no

    // i have to find even no
    for(int i=0;i<20;i++)
    {
        if(a[i]%2==0)
        {
            evenSum=evenSum + a[i];
        }
        else
        {
            oddSum=oddSum + a[i];
        }
    }
    printf("Sum of Even no is %d\n",evenSum);
    printf("Sum of odd no is %d\n",oddSum);

}