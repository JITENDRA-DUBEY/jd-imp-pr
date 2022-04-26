//JSG ASS 6
#include<iostream>
#include<conio.h>
using namespace std;
int sumn(int );
int main()
{
    int n,k;
    cout<<"Enter last number";
    cin>>n;
    k=sumn(n);

    cout<<"Sum  of even"<<n<<" number is ="<<k;
    getch();
    return 0;
}
int sumn(int n)
{
    if(n==0)
        return 0;
    else
        return (2*n+sumn(n-1));
}
