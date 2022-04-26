//jsg ass5 q3
#include<iostream>
#include<conio.h>
using namespace std;
int pm(int );
int main()
{
int n,k;
cout<<"ENTER A NUMBER\n";
cin>>n;
k=pm(n);
(k==1)?cout<<n<<" is prime":cout<<n<<" is not prime";
getch();
return 0;
}
int pm(int n)
{
int i,j;
for(i=2;i<=n-1;i++)
{
  if(n%i==0)
    break;
}if(i==n)
return 1;
else
return 0;
}
