// jsg
#include<iostream>
using namespace std;
class complex
{
private:
    int x,y;
public:
    complex() {x=0;y=0;}
    complex(int a){x=a;y=0;}
    complex(int a,int b){x=a;y=b;}// to avoid this error we use default argument concept
    //complex(int a=0,int b=0){x=a;y=b;}
    void set_data(int a,int b){x=a;y=b;}
    void show_data(){cout<<"\nYour data is  : "<<x<<"+"<<y<<"i";}
};
int main()
{
    complex c1(2,3),c2(1),c3;
    c1.show_data();
    //c1.set_data(2,3);
    c2.show_data();
    c3.show_data();
}
