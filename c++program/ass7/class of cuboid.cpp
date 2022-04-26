// jsg class of cuboid
#include<iostream>
#include<conio.h>
using namespace std;
class cuboid
{
    int l,b,h;
public:
    void setdim(int x,int y,int z);
    void showdim();
    int volume();

};
 void cuboid ::setdim(int x,int y,int z)
 {
     l=x;
     b=y;
     h=z;
 }
 void cuboid ::showdim()
 {
     cout<<"length = "<<l<<"\nbreath = "<<b<<"\nheight = "<<h;
 }
 int cuboid ::volume()
 {
     return l*b*h;
 }
 int main()
 {
     int l,b,h,k;
     cuboid a;
     cout<<"Eter length ,breath,height of cuboid\n";
     cin>>l>>b>>h;
     a.setdim(l,b,h);
     a.showdim();
     k=a.volume();
     cout<<"\nVolume = "<<k;
     getch();
     return 0;

 }
