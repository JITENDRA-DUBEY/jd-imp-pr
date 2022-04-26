//jsf ass1
#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
    int a,b,c;
public:
    Box(){a=0; b=0;c=0;}//by default consturu
    Box(int x){a=x; b=x;c=x;}//taking one arg for all dim
    Box(int x,int y,int z){a=x;b=y;c=z;}// taking two arg
    Box(Box &D)// copy constructor
    {
        a=D.a;
        b=D.b;
        c=D.c;
    }

    void set_data(int x,int y,int z){a=x; b=y;c=z;}
    void show_data(){cout<<a<<","<<b<<","<<c<<"\n";}

};
int main()
{
    Box b1(1,2,3);
    b1.show_data();
    Box b2;//nonparanthe constructor
    b2.show_data();
    Box b3(1);
    b3.show_data();
    // for copy constructor
    Box b4=b1;// complex c4=complex(c1);
    b4.show_data();
    return 0;

}
