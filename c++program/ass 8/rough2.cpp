// jsg ass 9
#include<iostream>
#include<conio.h>
using namespace std;
class account
{
  private:
    unsigned int acn;
    float balence;
   // static int roi;
public:
   void set_acn()
{
  int i;
  cout<<"plzz enter your account number";


    for(i=0;i<4;i++)
{
   cin>>acn[i];
   if(i==4)
    break;
}
}

      void set_bal()
      {
       cout<<"\nplzz feed your balence";
       cin>>balence;

      }
      void get_bal()
      {
       cout<<"\nYOUR BALENCE : ";
        cout<<balence;
      }
      void get_acn();

};

void account::get_acn()
{
  int i;
  cout<<"\nyour account number is : ";

for(i=0;i<4;i++)
{
   cout<<acn[i];
}

}

int main()
{
    account a;
    a.set_acn();

    a.get_acn();
    a.set_bal();
    a.get_bal();

}
