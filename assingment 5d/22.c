#include<stdio.h>
void main()
{
    int a=5,i,pro=1,no; 
    printf("Enter your choice\n1 for find factor of no\n2 for factorial of no\n");
    scanf("%d",&no);
    switch(no)
    {
        case 1:
        printf("\nEnter a no.\n");
        scanf("%d",&a);
          for(i=1;i<a;i++)
           {
              if(a%i==0)
              printf("%d ",i);
           }
        break;
        case 2:  
         printf("\nEnter a no.\n");
         scanf("%d",&a);
          for(i=1;i<=a;i++)
            {
                pro=pro*i;
            }
        printf("factorial is %d",pro);

        break;
        default:
        printf("Invalid\n");
        break;
    }

}