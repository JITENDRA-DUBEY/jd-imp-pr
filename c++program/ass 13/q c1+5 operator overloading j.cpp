/*jsg c1+5 by using operator overator loading
here we cant do 5+c1 because 5 int type and caller object always class type i.e complex*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void set_data(int x,int y){a=x;b=y;}
        void show_data(){cout<<"\na = "<<a<<","<<"b = "<<b;}
        Complex operator+(int );
};
Complex Complex:: operator+(int n)
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
    //c2=5+c1;// not 5 is int so it can`t be caller object;
    c2=c1+5;
     c2.show_data();

}
