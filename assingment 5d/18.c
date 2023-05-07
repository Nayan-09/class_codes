#include<stdio.h>
#include<math.h>
void main()
{
    int a,no,check,i;
   
    printf("Enter your choice\n1 for prime check\n2 for automorphic\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        
           printf("Enter your no\n");
           scanf("%d",&no);
           printf("You Entered %d\n",no);
           for(i=2;i<no;i++)
           {
            if(no%i==0)
            {
                check=0;
                break;
               // printf("%d is not prime no\n");
            }
            else
            {
                check=1;
                // printf("%d is prime\n");
            }
           }
              
            if(check==1)
            printf("%d is prime no\n",no);
            else
            printf("%d is not prime\n",no);
                
           break; 
            
        case 2:
        
           printf("Enter your no\n");
           scanf("%d",&no);
           printf("You Entered %d\n",no);
           check=no%10;

           if(sqrt(check)==pow(check,0.5))
           printf("Automorphic no\n");
           else
           printf("Not a Automorphic no \n");
            
        break;
            
          default:
          printf("invalid\n");
          break;
        }
    
    
    }