//JSG WAP TO REVERSE A NUUMBEBR
#include<conio.h>
#include<iostream>
using namespace std;
int rvrn(int );
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    rvrn(n);
    getch();
    return 0;
}
int rvrn(int n)
{
    int d=0,r,i,on=n;
    while(n!=0)
    {
        n=n/10;
        d++;
    }n=on;
    for(i=1;i<=d;i++)
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }

}
