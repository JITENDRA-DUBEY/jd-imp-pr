//JSG FUNCTION ASS 5
#include<iostream>
#include<conio.h>
using namespace std;
int evodd(int );
int main()
{
    int n,k;
    cout<<"Enter a Number";
    cin>>n;
    k=evodd(n);
    (k==1)?cout<<n<<" is even" :cout<<n<<" is odd";
    getch();
    return 0;
}
int evodd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;

}
