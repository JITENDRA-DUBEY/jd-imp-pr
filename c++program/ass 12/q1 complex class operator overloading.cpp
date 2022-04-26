// jsg operator overloading
#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int x,y;
public:
    void set_data(int a,int b){x=a;y=b;}
    void show_data(){cout<<"Your Data is : "<<x<<"+"<<y<<"i\n";}
  //normal  Complex add(Complex c)
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    Complex operator-(Complex c);
    Complex operator*(Complex c);
    void  operator==(Complex c);
};
Complex Complex :: operator-(Complex c)
{
        Complex temp;
        temp.x=x-c.x;
        temp.y=y-c.y;
        return temp;
}
Complex Complex :: operator*(Complex c)
{
    Complex temp;
    temp.x=x*(c.x)-y*(c.y);
    temp.y=x*(c.y)+y*(c.x);
    return temp;
}
void Complex :: operator==(Complex c)
{

       if((x==c.x)&&(y==c.y))
        cout<<"\nyes both are equal";
       else
        cout<<"\nnot equal";
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.set_data(2,3);
    c1.show_data();
    c2.set_data(-1,7);
    //c3=c1.add(c2); normal way
    //c3=c1.operator+(c2);// by using operator overloading or
    c3=c1+c2;
    c3.show_data();
    c4=c1-c3;
    c4.show_data();
    c5=c1*c4;
    c5.show_data();
    c5==c1;
    c6.set_data(23,-11);
    c6==c5;

}
