#include<stdio.h>
#include<string.h>
void main()
{
   char name[10]={"nayank"};
   int len;
   int vol=0,con=0;
   len=strlen(name);
   for(int i=0;i<len;i++)
   {
    if(name[i]==97||name[i]==65||
    name[i]==101||name[i]==69||
    name[i]==105||name[i]==73||
    name[i]==111||name[i]==79||
    name[i]==117||name[i]==85)
    {
        vol++;
    }
    else
    {
        con++;
    }
   


   }
    printf("vol is %d\nconstant is %d",vol,con);
    }