#include<stdio.h>
#include<math.h>
void main()
{
  int a=496,digit=0,sum=0;
  int b=a;
  float j=0.1;
  //count for zeros
  while(a>0)
  {
    digit=a%10;
    a=a/10;
    j=j*10;
   // printf("%f",j);    
    } 
//   printf("%f",j);
a=b;
while(a>0)
{
    digit=a%10;
    sum=sum+j*digit;
    j=j/10;
    a=a/10;
    }
    printf("%d\n",sum);
    
    
  if(b==sum)
  printf("plaindrome\n");
  else if(b%10!=2|| 3|| 7|| 8){
  printf("perfect sq\n");
  }
  }