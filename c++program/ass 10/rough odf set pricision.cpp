#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a=3.45678,b=4.5678;

    cout<<fixed;
    cout<<setprecision(3);
    cout<<a+b;
}
