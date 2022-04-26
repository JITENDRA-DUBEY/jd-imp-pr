//jsg
#include<iostream>
#include<conio.h>
using namespace std;
class result
{
private:

    int ta ;//total_attempt;
    int tr;//total right;
    int wr ;;//total wrng
    int mfr;//marsk for ryt;
    int mfw;// marks for wrng
public:
    void setdata(int x,int y,int z,int m=0,int n=0)//where m,n are default arg
    {
        ta=x;
        tr=y;wr=z;mfr=m;mfw=n;
    }
    void showdata();
};
void result ::showdata()
{
    cout<<"\nyour result :-";
    cout<<"\nTotal attempt ="<<ta;
    cout<<"\nTotal right ="<<tr;
    cout<<"\nTotal wrng ="<<wr;
    cout<<"\nTotal marks for ryt="<<mfr;
    cout<<"\nTotal marks for wrong ="<<mfw;
}
int main()
{  int a,b,c,d,e;
cout<<"\nEnter total attemps ech question hav 5 marks";
  cin>>a;
   cout<<"\nEnter total ryt";
   cin>>b;
   c=a-b;
   d=b*5;
    result r;
    r.setdata(a,b,c,d);// here we not pass e for tha we take e by default argu
    r.showdata();
    getch();
    return 0;
}
