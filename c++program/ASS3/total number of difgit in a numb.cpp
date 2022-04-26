//JSG COUNT TOTAL NUMBER OF DIGIT IN A NUMBBER
#include<iostream>
#include<conio.h>
using namespace std;
int countdig(int );
int main()
{
    int n,k;
    cout<<"Enter a number";
    cin>>n;
    k=countdig(n);
    cout<<"Total number of Digit:- "<<k;
    return 0;
}
int countdig(int n)
{   int d=0;
    while(n!=0)
    {
        n=n/10;
        d++;
    }
  return d;
}
