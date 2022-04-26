// jsg ass 9
#include<iostream>
#include<conio.h>
using namespace std;
class account
{
  private:
    unsigned long long int acn;
    float balence;
    static float roi;//rate of intrest
    public:

      void set_acn();
      void set_bal()
      {
       cout<<"\nplzz feed your balence";
       cin.ignore();
       cin>>balence;

      }
      void get_bal()
      {
       cout<<"\nYOUR BALENCE : ";
        cout<<balence;
      }
      void get_acn();

   float  get_roi()
   {
       float p;
       int t;
       cout<<"\nplzz enter the time period ";
       cin>>t;
       p=(balence*roi*t)/100.0; // this can not be static function be here we we object member variable;
       return p;
   }
   void finalbal(int x)
   {   float p;
       p=balence+x;
       cout<<"\nyour final balenece is : ";
       cout<<p;
   }

   static void set_roi()
   {
       cout<<"\nenter rate of interst: ";
       cin>>roi;
   }
 static float get_rvalse()
   {
       return roi;
   }

};
void account::set_acn()
{
  int i;
  cout<<"plzz enter your account number\n";


    cin>>acn;
}
void account::get_acn()
{
  int i;
  cout<<"\nyour account number is : ";

    cout<<acn;
}
float account::roi;

int main()
{ float x,y;
    account a;
    a.set_acn();
    a.set_bal();
    a.get_acn();
    a.get_bal();
    a.set_roi();//accessing statoc member function by object a
    //account::set_roi;
    cout<<"\nroi= "<<account::get_rvalse();
    //account::get_rvalse();//accesing stat meb varaible without object
    x=a.get_roi();
    cout<<"\nyour interest value : "<<x;
    a.finalbal(x);


}
