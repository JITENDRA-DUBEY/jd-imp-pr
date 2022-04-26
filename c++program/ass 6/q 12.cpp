//ass 6
#include<iostream>
#include<conio.h>
using namespace std;
unsigned long int fact(int n);
int main()
{
    int n;
    unsigned long int k;
    cout<<"Enter a number";
    cin>>n;
    k=fact(n);
    cout<<"factorial "<<k;
    getch();
    return 0;
}
unsigned long int fact(int n)
{
    if(n>1)
    {
    return (n*fact(n-1));
    }
}

