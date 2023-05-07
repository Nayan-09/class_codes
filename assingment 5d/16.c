#include<stdio.h>
void main()
{
    int i=1;
    while(i<=2)
    {
        int a,b;
        char c;
        printf("Enter your expression\n");
        scanf("%d%c%d",&a,&c,&b);
        switch(c)
        {
            case '+':
            {
                printf("%d\n",a+b);
                break;
            }
            case '*':
            {
                printf("%d\n",a*b);
                break;
            }
            case '%':
            {
                printf("%d\n",a%b);
                break;
            }
            case '-':
            {
                printf("%d\n",a-b);
                break;

            }
            default:
            printf("Invalid \n");
            break;
        }
        i++;
    }
}