//ass2 q
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a,b,c\n";
    cin>>a>>b>>c;
    if(a>c)
     {
       if(a>b)
            cout<<a<<" is greatest";
       else
        cout<<b<<" is greatest";
     }
     else
     {
         if(c>b)
            cout<<c<<" is greatest";
         else
            cout<<b<<" is greatest";
     }

}
