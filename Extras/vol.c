#include<stdio.h>
void main()
{
    char a;
    printf("Enter your character\n");
    scanf("%c",&a);
    if(a=='a'||a=='o'||a=='i'||a=='u'||a=='e'||a=='A'||a=='O'||a=='I'||a=='U'||a=='E')
    printf("Volwel %c",a);
    else 
    printf("Not a Volwel %c",a);
}