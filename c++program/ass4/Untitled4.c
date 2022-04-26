// jsg LCM
#include<iostream>
#include<conio.h>
using namespace std;
int hdig(int n);
int main()
{
    int a,k;
    cout<<"ENTER A NUMBERS\n";
    cin>>a;
    k=hdig(a);
    cout<<"HIGHEST DIG = "<<k;
    getch();
    return 0;
}
int hdig(int n)
{
    int m=0,d=0,on;
   on=n;
    while(n!=0)
    {
        n=n/10;
        d++;
    }n=on;
    for(i=1;i<=d;i++)
    {
        r=r%10;
        if(r>m)
        {
            m=r;
        }n=n/10;
    }
    return m;
}
