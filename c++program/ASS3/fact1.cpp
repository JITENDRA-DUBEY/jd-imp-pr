#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n,on,i=1,fact=1;
    cout<<"plzz enter a numb\n";
    cin>>n;
    on=n;
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"factorial of "<<on<<" is = "<<fact;
    return 0;
}
