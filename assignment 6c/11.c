#include<stdio.h>
#include<string.h>
void main()
{
    char name[10]={"nayan"};
    int len,j;
    len=strlen(name);
    
    for(int i=0;i<=len;i++)
    {
       if( name[i]==name[len-1])
       {
        //printf("Plaindrom\n");
        j=1;
       }
       else{
      // printf("Not plaindrome\n");
       j=0;
       }
        len=len-1;
    }
    if(j==1)
    printf("Plaindrome\n");
    else
    printf("NOt plaindrome\n");
}