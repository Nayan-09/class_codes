#include<stdio.h>
int check(int);
void prime(int arr[],int size);
void main()
{
    int no=5,k;
     int arr[20]={2,3,5,7,9};
    // printf("Enter 20 no");
    // for(int i=0;i<20;i++)
    // scanf("%d",&arr[20]);

    prime(arr,5);

}

void prime(int arr[],int size)
{
  int sum=0;
  for(int i=0;i<size;i++)
  {
    if(check(arr[i])==1)
    {
        sum=sum+arr[i];
        printf("%d ",arr[i]);
    }
  }
  printf("Sum of prime no is %d",sum);
}

int check(int no)
{ int k;

   if(no==2)
   {
    k=1;
    return k;
   }

    for(int i=2;i<no;i++)
    {


        if(no%i==0)
        {
            k=0;
            break;
        }
        else
        {
            k=1;
        }
    }
    //printf("%d\n",k);
    return k;
}
