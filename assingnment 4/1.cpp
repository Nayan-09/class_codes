#include<iostream>
using namespace std;
int main()
{
 int a=948,sum=0,digit;
 //cin>>a;

 while(a>0)
 {
    digit=a%10;
    sum=sum+digit;
    // update
    a=a/10;
 }
 cout<<"Sum is "<<sum;
 
}