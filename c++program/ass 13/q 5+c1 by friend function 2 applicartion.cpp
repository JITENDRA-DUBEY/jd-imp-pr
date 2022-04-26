/*jsg c1+5 by using operator overator loading
here we cant do 5+c1 because 5 int type and caller object always class type i.e complex this is 2nd use of friend function*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void set_data(int x,int y){a=x;b=y;}
        void show_data(){cout<<"\na = "<<a<<","<<"b = "<<b;}
        friend Complex operator+(int ,Complex);
};
Complex operator+(int n,Complex c)
{
    Complex temp;
    temp.a=n+c.a;
    temp.b=c.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c1.show_data();
    c2=5+c1;//+is a friend function in which we pass 5(int ),c1(complex) as a argument and rtetrun a complex value;
    //c2=c1+5;
     c2.show_data();

}
