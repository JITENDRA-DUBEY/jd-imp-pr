//jsg ass5 q1
#include<iostream>
#include<conio.h>
using namespace std;
float areac(float );
int main()
{
float r,k;
cout<<"ENTER RADIUS OF CIRCLE\n";
cin>>r;
k=areac(r);
cout<<"AREA = "<<k;
getch();
return 0;
}
float areac(float r)
{
float ar;
ar =3.14*r*r;
return ar;
}
