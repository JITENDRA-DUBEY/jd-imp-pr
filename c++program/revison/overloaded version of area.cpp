// jsg
#include<iostream>
using namespace std;
class ar
{
    float x,y,r;
    static float pi;
public:
     void set_rad(float a){r=a;}
     void set_recdim(float u,float v){ x=u;y=v;}
     static set_pi(float p){pi=p};
     float area()
     {
         return (pi*r*r);
     }
   float area()
   {
       return(x*y);
   }
};
int main()
{
    ar a1,a2,a3;
    a1.set_rad(3.5f);
    cout<<"\narea : "a1.area();
}
