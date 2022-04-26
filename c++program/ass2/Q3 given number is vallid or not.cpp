//jsg GIVEN NUMBER IS VALID OCTAL NUMBER OR not_a_directory#include<iostream>
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,r;
cout<<"Enter a number\n";
cin>>n;
// as we knoow in base we have number 0 t0 7 if any numb>7 then not
while(n!=0)
{
    r=n%10;
    if(r>=8)
    {
        cout<<"NOT A VALID OCTAL NUMBER";
            break;
    }n=n/10;

}if(n==0)
cout<<"given number is octal";
}
