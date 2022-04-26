//jsg ass5 q4
#include<iostream>
#include<conio.h>
using namespace std;
int nxpm(int );
int main()
{
int n,k;
cout<<"ENTER A NUMBER\n";
cin>>n;
k=nxpm(n);
cout<<k;
getch();
return 0;
}
int nxpm(int a)
{
int i,j;
for(i=a+1;;i++)
{
for(j=2;j<i;j++)
{
  if(i%j==0)
    break;
}if(i==j)
return j;
if(j>=a+1)
    break;
}
}
