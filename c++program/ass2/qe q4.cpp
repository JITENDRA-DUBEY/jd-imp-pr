//q4 qe ax^2+b*x+c;
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter the value of a,b,c\n";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"BOTH ROOTS ARE REAL AND EQUAL";
    }
    else
    {
        if(d>0)
        {
           cout<<"BOTH ROOTS ARE REAL";
        }
        else
            cout<<"BOTH ROOTS ARE IMAGINARY";
    }
}
