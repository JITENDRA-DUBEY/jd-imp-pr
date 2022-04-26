// jsg define a class
#include<iostream>
using namespace std;
int i=1;
class Complex
{
    private:
        int x,y;
    public:
        void set_data(int a,int b){x=a;y=b;}
        void show_data()
        {if(y>0)
            {cout<<"\n"<<i++<<"."<<x<<"+"<<y<<"i";}
            else
            {if(y<0){cout<<"\n"<<i++<<"."<<x<<y<<"i";}
              else
              cout<<"\n"<<i++<<"."<<x<<"+"<<y<<"i";
              }

        }
        Complex operator-();//since this is uniary minus operation so require only one argument
        // which is already it have when object call it so here we dont require to pass any argument;
        Complex operator!();
        Complex operator++();// preincrement
         Complex operator++(int a);// for confusing compiler


};
Complex Complex ::operator-()
{
    Complex temp;
    temp.x=-x;
    temp.y=-y;
    return temp;
}
Complex Complex::operator!()
      {
        Complex temp;
        if(x!=0){temp.x=0;}
        else{temp.x=1;}
        if(y!=0){temp.y=0;}
        else{temp.y=1;}
        return temp;
        }
Complex Complex::operator++()
{
    Complex temp;
    temp.x=++x;
    temp.y=++y;
    return temp;
}
Complex Complex::operator++(int a)
{
    Complex temp;
    temp.x=x++;
    temp.y=y++;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.set_data(1,-2);
    c1.show_data();
    c2.set_data(0,-4);
    c2.show_data();
    c3=-c1;// c1 call his uniary minus opertaor taking no argument and then return value and assign in c3;
    c3.show_data();
    c4=!c2;
    c4.show_data();
    c5=++c1;//preincrement;
    c5.show_data();
    c6=c2++;
    c6.show_data();
    c2.show_data();
}

