#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n,on,r,countd=0;
    cout<<"plzz enter a numb\n";
    fflush(stdin);
    cin>>n;
    n=on;
    while(n!=0)
    {

        countd++;
         n=n/10;
    }
    cout<<"total number of digit is "<<on<<" is = "<<countd;
    return 0;
}
