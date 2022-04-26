// jsg LCM
#include<iostream>
#include<conio.h>
using namespace std;
int maxe(int ,int );
int lcm(int a,int b,int r);
int main()
{
    int a,b,r,k;
    cout<<"ENTER TWO NUMBERS\n";
    cin>>a>>b;
    r=max(a,b);
    k=lcm(a,b,r);
    cout<<"LCM = "<<k;
    getch();
    return 0;
}
int maxe(int a,int b,int r)
{
    if(a>b)
        return a;
    else
        return b;
}
int lcm(int a,int b,int r)
{
    int i,j,lc=1;
    for(j=2;j<=r;j++)
    {
        for(i=2;i<=j;i++)
        {
           if(a%i==0&&b%i==0)
           {
               lc=lc*i;
               a=a/i;
               b=b/i;
           }
           else
            {
                if(a%i==0)
                {
                    lc=lc*i;
                    a=a/i;
                }
                if(b%i==0)
                {
                    lc=lc*i;
                    b=b/i;
                }
           }
        }
    }
    return lc;
}
