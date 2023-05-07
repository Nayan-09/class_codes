//Find the Union and Intersection of the two sorted arrays.
#include<iostream>
using namespace std;
void uni(int *arr,int size1,int *brr,int size2,int crr[])
{
    int k=0;
    for(int i=0;i<size1;i++)
    {
       for(int j=0;j<size2;j++)
       {
       if(arr[i]==brr[j] )
       {
           crr[k]=arr[i];
           k++;
           }
          else if(brr[i]>arr[i])
          {
           break;
              }
       }

        }

    }
int main()
{
 int arr[5]={2,5,6,8,11}, brr[5]={3,7,8,11,12};
 int size1=5,size2=5;
 int crr[size1


    }
