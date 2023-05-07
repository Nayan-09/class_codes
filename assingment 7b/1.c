#include<stdio.h>
void call(int*);
void main()
{
    int a=5;
    call(&a);
}
void call(int *x)
{
    printf("Nayan\n");


}