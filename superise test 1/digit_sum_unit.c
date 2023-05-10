#include<stdio.h>
void echo(int);
int add(int* ,int);
void main()
{
    int a=444;
   // int arr[10]={4,5,2,34,90,45,23,455,90,635};
    // printf("Enter 10 no\n");
    // for(int i=0;i<10;i++)
    // scanf("%d",&arr[i]);

   // a=add(arr,10);

    echo(a);
}
int add(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }  
    return sum;
}

void echo(int a)
{
    int sum=0;
    if(a<9 && a>1)
    {
        printf("sum of unit place is %d\n",a);
        return ;
    }
    int bada=a;
  while(bada)
  {
    int digit=0;
    digit=bada%10;
    sum=sum+digit;
    bada=bada/10;
  }
  //printf("%d \n",sum);
  a=sum;

  echo(a);


}
