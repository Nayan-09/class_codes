#include <stdio.h>
#include <math.h>
void per(int*);
int main()
{
int num=62926;

// printf("Enter an integer number: ");
// scanf("%d",&num);
per(&num);

return 0;
}

void per(int *numm)
{
    int num=*numm;
    int num1=num,sum=0,digit2;
    int cnt=1,digit,z=num;
    while(num>0)
    {
        digit=num%10;
        cnt=cnt*10;
        num=num/10;
    }
    cnt=cnt/10;
    //printf("%d",num1);
    //printf("%d",cnt);
    while(num1>0)
    {
        digit2=num1%10;
        //printf("%d ",digit2);
        sum=sum+digit2*cnt;
        //printf("%d ",sum);
        cnt=cnt/10;
        num1=num1/10;
    }
    num=z;
    if(sum==num)
    printf("Plaindrome  %d",num);
    else 
    printf("not Plaindrome %d",num);

}
