#include<stdio.h>
#include<math.h>
void main()
{
    int a=45,b=45,ch;
    ch=4;
    switch(ch)
    {
    case 1:{
    printf("%d",a*a);
    break;
    }

    
    case 2:
    {
    printf("%d",a*a*a);
    break;
    
}
 case 3:
    {
        printf("%f",sqrt(a));
    
    break;
}
 case 4:
    {
    printf("%f",cbrt(a));
    break;
}

}}