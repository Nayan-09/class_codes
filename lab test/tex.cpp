#include<iostream>
using namespace std;
class complex
{
    private:
    int a;
    int b;
    public:
    void set_data(int x, int y)
    {
        //cin>>x>>y;
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<a<<" "<<b<<" "<<endl;
    }
};
int main()
{
    complex c1,c2;
   // c1.set_data(90,35);
   c2.set_data(76,89);

  //  c1.show_data();
   c2.show_data();
    return 8;

}
