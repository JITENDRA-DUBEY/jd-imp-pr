//jsg q2
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b,c;
cout<<"plzz enter length of sides of triangle\n";
cin>>a>>b>>c;
if((a+b>c)&&(b+c>a)&&(c+a>b))
{
    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))
    {
        cout<<"GIVEN TRIAGLE IS RIGHT ANGLE\n";
    }
    else
        cout<<"NOT A RIGHT ANGLE\n";
}
else
    cout<<"THIS CAN NOT BE A TRIANGLE";
}
