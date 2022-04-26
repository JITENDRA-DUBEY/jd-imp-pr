/*jsg c1+5 by using operator overator loading
here we cant do 5+c1 because 5 int type and caller object always class type i.e complex*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void set_data(int a,int b){x=a;y=b;}
        void show_data(cout<<"\na = "<<a<<"b = "<<b;)
        Complex operator+(int );
};
Complex operator+(int n)
{
    Complex temp;
    temp.a=n+a;
    temp.b=b;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c1.show_data();
    c2=5+c1;
     c2.show_data();

}
