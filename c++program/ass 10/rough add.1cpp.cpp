// jsg
#include<iostream>
using namespace std;
class ar
{
    float x,y,r;
    static float pi;
public:

    static set_pi(float p){pi=p;}
    void set_rad(float x){r=x;}
    void set_dim(float a,float b){x=a;y=b;}
    float area(int x){return (pi*r*r);}//here we use the value of pi so we creat area as an instance member;
    // here take (intx)so complier not get confuse during calling pf area;
    float area(){return x*y;}
};
float ar::pi;
int main()
{ ar a1,a2;
    ar::set_pi(3.14f);
    a1.set_rad(2.5f);
    a1.set_dim(3,4);
    cout<<"\nArea of circle is: "<<a1.area(3);
        cout<<"\nArea of rectangle is: "<<a1.area();

}
