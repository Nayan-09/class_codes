#include <stdio.h>
#include <math.h>
void per(int);
int main()
{
int num=63;
int iVar;
float fVar;
//printf("Enter an integer number: ");
//scanf("%d",&num);
per(num);

return 0;
}

void per(int num)
{
    float s;
    int p;
    s=sqrt((float)num);
    p=(int)pow(num,0.5);
   // printf("%f  %d",s,p);

    if(s==p)
    printf("Perfect sq %d",num);
    else
        printf("NOt Perfect sq %d",num);
}
