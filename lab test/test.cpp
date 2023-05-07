#include<iostream>
using namespace std;
void sum(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           if(arr[j]>arr[j+1]){
           swap(arr[j],arr[j+1]);
           }
            //cout<<arr[j]<<" ";
        }

    }
}
int main()
{
    int arr[5]={7,3,4,8,1};
    sum(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 9;

}
