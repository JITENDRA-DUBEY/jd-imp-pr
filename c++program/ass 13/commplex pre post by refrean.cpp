//jsg
#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
        int a,b;
public:
    void set_data(int x,int y){a=x;b=y;}
    void show_data(){cout<<"\na value ="<<a<<"\nb value ="<<b; }
    friend Complex operator+(Complex c1,Complex c2);
    friend Complex operator-(Complex c1);//- is uniary (negation)
    friend Complex operator++(Complex &c1);//preincrement;
    friend Complex operator++(Complex &c1,int );

};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}
Complex operator-(Complex c)
{
    Complex temp;
    /*temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;*/
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
}
Complex operator++(Complex &c)
{
	Complex temp;
	temp.a=++c.a;
	temp.b=++c.b;
	return temp;
}
Complex operator++(Complex &c,int )
{
	Complex temp;
	temp.a=c.a++;
	temp.b=c.b++;
	cout<<"\nHello";
	return temp;
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.set_data(3,4);
    c2.set_data(5,-6);
     c3=c1+c2;
    //c3=operator+(c1,c2);// here we have to use operator that without that it gave error;
    c3.show_data();
    //c4=operator-(c3);
    c4=-c3;
    c4.show_data();
    //c5=operator++(c4);
    c5=++c1;
    c5.show_data();
    c1.show_data();
    //c6=operator++(c5);
    c6=c5++;
    c6.show_data();
    c5.show_data();

}
