#include<iostream>
using namespace std;

int Maxi(int arr[],int size)
{
    int i=0,b=0;
     b=-7876;
    while(size>0)
    {
       
       // cout<<i<<endl;
       // update
        if(arr[i]>b)
        b=arr[i];
        
    
       
        i++;

        size--;
    }
    return b;
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

}
int main()
{
    int arr[]={4,64,87,2,1};
    cout<<Maxi(arr,5);
    //print(arr,31);
   // cout<<swap(45,34);
   // cout<<b;

    return 0;
}