// jsg frnd function;
#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
    private:int a,b;
    public:
        void set_data(int x,int y){a=x;b=y;}
        void show_data(){cout<<"\na value ="<<a<<"\nb value ="<<b; }
        friend void add(Test t);
};
void add(Test t)
{
    cout<<"\nSum equals ="<<t.a+t.b;
}
int main()
{
    Test t1,t2,t3;
    t1.set_data(3,4);
    t1.show_data();
    add(t1);
}
