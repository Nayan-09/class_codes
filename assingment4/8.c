#include<stdio.h>
void main()
{
    float no=4,unit=564,charge;
    if(unit==100)
    charge=1.80;
    else if(unit>100)
    charge=2.30;
    else if(unit>300)
    charge=2.80;
    else if(unit>500)
    charge=3.50;

printf("Cons no %f have bill of %f",no,charge*unit);

}