#include <stdio.h>
#include <math.h>
void per(int*);
int main()
{
int num=5889;
// int iVar;
// float fVar;
// printf("Enter an integer number: ");
// scanf("%d",&num);
per(&num);

return 0;
}

void per(int *numm)
{
    int num=*numm;
    int cnt=0,sum=0,digit;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("Sum is %d",sum);
}
