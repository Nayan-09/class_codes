#include<stdio.h>
void main()
{
    float physics=78.0,chemistry=90.0,biology=89.0;
    float total,avg;
    total =(( physics + chemistry + biology)/300)*100;
   // printf("%f",total);
    avg=( physics + chemistry + biology)/3;
    if(total>=80)
    printf("Distinction\n %f \n",avg);
    else if(total>=60)
    printf("1st Divistion\n %f \n",avg);
    else if(total>=45)
    printf("2nd Division\n %f \n",avg);
        else if(total>=40)
    printf("Pass \n %f \n",avg);
    else
    printf("Promotion not granted\n %f \n",avg);
    
}

