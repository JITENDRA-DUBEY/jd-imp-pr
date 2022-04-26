//ass 6
#include<iostream>
#include<conio.h>
using namespace std;
void btod(int n);
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    btod(n);
    getch();
    return 0;

    }
void btod(int n)
{
  if(n>=1)
  {
  btod(n/2);
  cout<<n%2;
 }
}

