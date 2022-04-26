#include<iostream>
//#include<
using namespace std;
class complex
{
private:
    int a,b;
public:
    void set_data(int x,int y){a=x;b=y;}
    void get_data(){cout<<"\na= "<<a<<"b= "<<b;}
    complex add(complex c)
    {
        complex t;
        t.a=a+c.a;
        t.b=b+c.b;
        return t;
    }

};
int main()
{
  complex c1,c2,c3;
  c1.set_data(3,4);
  c1.get_data();
  c2.set_data(4,5);
  c2.get_data();
  c3=c1.add(c2);
  c3.get_data();

}
