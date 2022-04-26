//ass 6
#include<iostream>
#include<conio.h>
using namespace std;
void octtod(int n);
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    octtod(n);
    getch();
    return 0;

    }
void octtod(int n)
{
  if(n>=1)
  {
  octtod(n/8);
  cout<<n%8;
 }
}

