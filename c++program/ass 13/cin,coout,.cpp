/*jsg third use of friend function to access object of any other predefined class cin>>c1,cout<<c1<<c2;/*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void set_data(int x,int y){a=x;b=y;}
        void show_data(){cout<<"\na = "<<a<<","<<"b = "<<b;}
       friend istream &operator>>(istream &,Complex&);
       friend ostream&operator<<(ostream &,Complex);// no nedd of complex refrence
};
 istream&operator>>(istream &din,Complex&c)
{
   din>>c.a>>c.b;
   return din;
}
ostream&operator<<(ostream &dout,Complex c)
{
   dout<<"\na = "<<c.a<<",b= "<<c.b;
   return dout;

}
int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c1.show_data();
    cin>>c1>>c3;
    cout<<c1<<c3;
    //c2.show_data();

}
