#include <stdio.h>
#include <math.h>
void per(int);
int main()
{
int num=5;
// int iVar;
// float fVar;
// printf("Enter an integer number: ");
// scanf("%d",&num);
per(num);

return 0;
}

void per(int num)
{
    int pro=1;
    for(int i=num;i>1;i--)
    pro=pro*i;
    printf("%d",pro);
}
