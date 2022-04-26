// jsg a class of complex number
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
 private:
       int a,b;//instace member variable
  public:
  void setdata(int x,int y)//x,y are local variable
  {
   a=x;
   b=y;
  }
  void showdata()//instance memb function
  {
    cout<<"a= "<<a<<","<<"b= "<<b<<"\ncomp num = "<<a<<"+"<<b<<"i";
  }
};
int main()
{
   int r,i;
  complex c1;
  cout<<"Enter real and imag value:-\n";
  cin>>r>>i;
  c1.setdata(r,i);
  c1.showdata();
  getch();
  return 0;
}
