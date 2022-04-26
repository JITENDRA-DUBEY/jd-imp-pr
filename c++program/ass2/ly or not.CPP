//JSG leapy or not_a_directory#include<iostream>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
int y;
cout<<"Enter a year\n";
cin>>y;
if(y%100==0)
    cout<<"LEAP YEAR";
else{
    if(y%4==0)
    cout<<"LEAP YEAR";
    else
        cout<<"NOT A LEAP YEAR";
}
}


