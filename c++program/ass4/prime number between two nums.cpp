//JSG ASS4 Prime number between two number
#include<iostream>
#include<conio.h>
using namespace std;
void prime(int ,int );
int main()
{
    int a,b;
    cout<<"Enter Two numbers";
    cin>>a>>b;
    prime(a,b);
    getch();
    return 0;
}
void prime(int x,int y)
{
    int i,j;
    for(i=x+1;i<=y-1;i++)
    {
    for(j=2;j<=i;j++)
    {
        if(i%j==0)
            break;
    }if(i==j)
    cout<<i<<"\tN";
    }
}
