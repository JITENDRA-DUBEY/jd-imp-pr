// jsg define a class
#include<stdio.h>
using namespace std;
int i=0;
class Complex
{
    private:int x,y;
    public:
        void set_data(int a,int b){x=a;y=b;}
        void show_data()
        {if(y>0)
            {cout<<i++<<"."<<x<<"+"<<y<<"i";}
            else
            {cout<<i++<<"."<<x<<"-"<<y<<"i";}
        }
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.set_data(1,2);
    c1.show_data;
    c2.set_data(3,-4);
    c2.show_data();

}
