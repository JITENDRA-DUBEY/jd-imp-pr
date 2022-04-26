//jsg q4a function overloading that means function having same name but diffrent signature
#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
private:
    static float pi;
public:
    void setdata()
    {
        pi=3.14;
    }
    float area(float r)
    {
        return pi*r*r;// this is instance mem variable this can access static memb variable;
    }
    float area(float x,float y)
    {
        return x*y;
    }
};
float operation ::pi;// this is mandatory becaure pi is stat so first we have to give memory not in real pi behave like var;
int main()
{
    operation a;
    a.setdata();
    cout<<"\narea of circ = "<<a.area(2);
   cout<<"\narea of recta ="<<a.area(3.2,5.3);
    getch();
    return 0;

}
