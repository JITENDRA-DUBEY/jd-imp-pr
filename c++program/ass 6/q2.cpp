//JSG as6
#include<iostream>
#include<conio.h>
using namespace std;
void nat(int );
int main()
{
    int n;
    cout<<"Enter last number";
    cin>>n;
    nat(n);
    getch();
    return 0;
}
void nat(int n)
{
    if(n>0)
    {
    cout<<n<<"\n";
     nat(n-1);
    }
}
