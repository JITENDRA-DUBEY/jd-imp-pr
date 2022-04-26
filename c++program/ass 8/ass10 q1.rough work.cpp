//js ass 10
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {  if(b>=0)
        cout<<"\na= "<<a<<"\nb= "<<b<<"\ncomplex  number : "<<a<<"+"<<b<<"i";
        else
        cout<<"\na= "<<a<<"\nb= "<<b<<"\ncomplex  number : "<<a<<"-"<<-b<<"i";

    }

    complex add_data(complex c)//instance memeber function
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complex sub_data(complex c)//instance memeber function
    {
        complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
     complex mult_data(complex c)//instance memeber function
    {
        complex temp;
        temp.a=a*(c.a)-b*(c.b);
        temp.b=a*(c.b)+b*(c.a);
        return temp;
    }
};
int main()
{
    complex c1,c2,c3,c4,c5;
    c1.set_data(3,4);
    c1.show_data();
    c2.set_data(-5,-6);
    c2.show_data();
    c3=c1.add_data(c2);
    cout<<"\naddtion : ";
    c3.show_data();
    c4=c1.sub_data(c2);
    cout<<"\nsubt. : ";
    c4.show_data();
    c5=c1.mult_data(c2);
    cout<<"\nmult : ";
    c5.show_data();
    return 0;
}
