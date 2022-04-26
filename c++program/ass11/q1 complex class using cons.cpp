//jsf ass1
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex(){a=0; b=0;}//by default consturu
    complex(int x){a=x; b=0;}//taking one arg
    complex(int x,int y){a=x;b=y;}// taking two arg
    complex(complex &D)// copy constructor
    {
        a=D.a;
        b=D.b;
    }

    void set_data(int x,int y){a=x; b=y;}
    void show_data(){cout<<a<<"+"<<b<<"i\n";}

};
int main()
{
    complex c1(1,2);
    c1.show_data();
    complex c2;//nonparanthe constructor
    c2.show_data();
    complex c3(1);
    c3.show_data();
    // for copy constructor
    complex c4=c1;// complex c4=complex(c1);
    c4.show_data();
    return 0;

}
