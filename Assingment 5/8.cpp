#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0;
    d=sqrt(b*b-4*a*c);
    if(d>0)
    cout<<"Real roots"<<endl;
    else if(d==0)
    cout<<"Equal roots"<<endl;
    else
    cout<<"Imaginary roots"<<endl;
}