// jsg
#include<iostream>
using namespace std;
class complex
{
private:
    int x,y;
public:
    //complex() {x=0;y=0;}
    //complex(int a){x=a;y=0;}
    //complex(int a,int b){x=a;y=b;}// to avoid this error we use default argument concept
    complex(int a=0,int b=0){x=a;y=b;cout<<"\nHello";}
    //for copy constructor
    complex(complex &r){x=r.x;y=r.y;cout<<"\nHello";}// int this hello not printed because
    //dueaty of copy constructor is only assigning the value not print
    void set_data(int a,int b){x=a;y=b;}
    void show_data(){cout<<"\nYour data is  : "<<x<<"+"<<y<<"i";}
};
int main()
{
    complex c1(2,3),c2(1),c3;
    c1.show_data();
    //c1.set_data(2,3);
    c2.show_data();
    c3=c1; //it will not printf hello of copy constructor because copy constructor is only call
    // when we intialize any object at the time of creating object so in complext c4 it will
    // print hello or call copy constructor;
    c3.show_data();
    complex c4=c3;
    c4.show_data();
}
