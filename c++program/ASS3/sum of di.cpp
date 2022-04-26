//JSG COUNT sum OF DIGIT IN A NUMBBER
#include<iostream>
#include<conio.h>
using namespace std;
int sumdig(int );
int main()
{
    int n,k;
    cout<<"Enter a number";
    cin>>n;
    k=sumdig(n);
    cout<<"Total number of Digit:- "<<k;
    return 0;
}
int sumdig(int n)
{   int d=0,r,on=n,sum=0;
    while(n!=0)
    {
        n=n/10;
        d++;
    }n=on;
    for(int i=1;i<=d;i++)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
  return sum;
}
