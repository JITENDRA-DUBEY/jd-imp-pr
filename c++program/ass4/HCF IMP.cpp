// jsg HCF
#include<iostream>
#include<conio.h>
using namespace std;
int mine(int ,int );
int hcf(int a,int b,int r);
int main()
{
    int a,b,r,k;
    cout<<"ENTER TWO NUMBERS\n";
    cin>>a>>b;
    r=max(a,b);
    k=hcf(a,b,r);
    cout<<"HCF = "<<k;
    getch();
    return 0;
}
int mine(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int hcf(int a,int b,int r)
{
    int i,j,hc=1;
    for(j=1;j<=r;j++)
    {
        for(i=1;i<=j;i++)
        {
           if(a%i==0&&b%i==0)
           {
               hc=hc*i;
               a=a/i;
               b=b/i;
           }
        }
    }
    return hc;
}
