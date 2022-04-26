//JSG FUNCTION ASS 5
#include<iostream>
#include<conio.h>
using namespace std;
float areac(float );
int main()
{
    float r,k;
    cout<<"Enter Radius";
    cin>>r;
    k=areac(r);
    cout<<"AREA OF CIRCLE :"<<k;
    getch();
    return 0;
}
float areac(float r)
{
    float ar;
    ar =3.14*r*r;
    return ar;
}
