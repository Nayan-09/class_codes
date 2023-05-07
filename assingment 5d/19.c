#include<stdio.h>
void main()
{
  int i,n,j=0,odd,even;
  float sum=0,div;
  printf("Enter your choice\n");
  scanf("%d",&i);
  switch(i)
  {
    case 1:
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        odd=(2*i)+1;
        j=j+odd;
        printf("%d ",j);
    }


    break;
    case 2:
    i=1;
    printf("1/2 + 3/4 + 5/6 ... n \nEnter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

    odd=2*i+1;
    even=2*i;
    div=(odd*1.0)/(even);
    sum=sum+div;
    
    }
    printf("Sum of series %f",sum);

    break;
    default:
    printf("Invalid \n");
    break;


  }
}