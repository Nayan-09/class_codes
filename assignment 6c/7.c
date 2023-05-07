#include<stdio.h>
#include<string.h>
void main()
{
   char name[10];
   // char name[10]={"Nayan948&4"};
   printf("ENter your string\n");
   gets(name);


    int len=0,low=0,upr=0,dig=0,sym=0;

    len=strlen(name);
    for(int i=0;i<=len;i++)
    {
        if(name[i]>=97 && name[i]<=122)
        low++;
        else if(name[i]>=65 && name[i]<=90)
        {
            upr++;
        }
        else if(name[i]>=48 && name[i]<=57)
        {
            dig++;
        }
        else
        {
            sym++;
        }
            }
        printf("Lower case is %d\nUpper case is %d\ndigit is %d\nspecial symbol is %d\n",low,upr,dig,sym);



    //printf("%d",'9');
    
    
    }