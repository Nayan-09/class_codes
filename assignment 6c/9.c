#include<stdio.h>
#include<string.h>
void main()
{
    char name[30]={"nayan kumar jk"};
    int len,count=1;
    len=strlen(name);
    for(int i=0;i<len;i++)
    {
        if(name[i]==32)
        {
            count++;
        }
    }
    printf("Total no of word is %d",count);
}