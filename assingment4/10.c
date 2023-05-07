#include<stdio.h>
#include<math.h>
void main()
{
    int a=7,b=8,get;
    printf("Enter your choice\n 1 for area \n 2 for perimeter \n 3 for diagonal \n");
    get=3;
    switch(get)
    {
        case 1:
        printf("Area %d\n",a*b);
        break;
       
        case 2:
        printf("Perimeter %d\n",2*(a+b));
        break;

        case 3:
         printf("Diagonal %f\n",sqrt(a*a+b*b));
        break;

        default:
        printf("Invalid\n");
        break;
    }

}