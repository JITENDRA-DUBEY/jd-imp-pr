// jsg
#include<iostream>
using namespace std;
class ar
{
    //float x,y,r;
    static float pi;
public:

     static set_pi(float p){pi=p;}
    float area(int r){return (pi*r*r);}//here we use the value of pi so we creat area as an instance member;
    float area(int x,int y){return x*y;}
};
float ar::pi;
int main()
{ ar a1,a2;
    ar::set_pi(3.14f);
    cout<<"\nArea of circle is: "<<a1.area(2.0f);
        cout<<"\nArea of circle is: "<<a2.area(2,3);

}
