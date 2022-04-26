//jsg ass5 q5 tsrs doubt

#include<iostream>
#include<conio.h>
using namespace std;
int allpm(int ,int );
int main()
{
int a,b,k,i=1;
cout<<"ENTER TWO NUMBER\n";
cin>>a>>b;
k=a;
for(i=a;i<b;i++)
{
    if(k<b)
    {
  k=allpm(k,b);
  if(k<b)
  {
    cout<<k<<"\t";
  }

  }
}

getch();
return 0;
}
//find next prime in each time
int allpm(int a,int b)
{
int i,j;
for(i=a+1;;i++)
{
for(j=2;j<i;j++)
{
  if(i%j==0)
    break;
} if(i==j)
return j;
if(j>=a+1&&j<b)
    break;

}
}
