#include<iostream>
using namespace std;
int main()
{
 int a=3457,count=0,digit,value;
    digit=a%10;
    if(digit>0)
    {
      a=a-digit;

    }
 

// 2345=2*1000+3*100+4*10+5
 //2345=2340
 cout<<a;
 
}