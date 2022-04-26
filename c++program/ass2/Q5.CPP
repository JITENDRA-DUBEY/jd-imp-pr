#include<iostream>
#include<conio.h>
int main()
{
int a,b;
std::cout<<"Enter two number\n";
std::cin>>a>>b;
(a>b)?std::cout<<a<<" is greater than " <<b:std::cout<<b<<" is greater than" << a;
return 0;
}
