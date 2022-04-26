//JSG ASS4 PM OR NOT
#include<iostream>
#include<conio.h>
using namespace std;
void prime(int );
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    prime(n);
    getch();
    return 0;
}
void prime(int n)
{
    int i,j;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
            break;
    }(i==n)?cout<<"PRIME":cout<<"NOT PRIME";
}
