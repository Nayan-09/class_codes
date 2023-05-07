#include<stdio.h>
void main()
{
    int n=4;
    printf("echo\n");
    for(int i=0;i<4;i++){
        for(int s=3;s>i;s--)
        {
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}