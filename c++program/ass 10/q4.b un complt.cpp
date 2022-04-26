//jsg q4 b overloaed version of add function which is used to add to int alue and add to float and conca to string
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void add(int x,int y,float z=0)
{
    cout<<"\nAddition = "<<x+y;
}
void add(float x,float y,float z=0)
{
    cout<<"\nAddition of float = "<<x+y+z;
}

void add(char a[],char b[])
{
    strcat(a,b);
    cout<<"\nconcinated string= "<<a;
}
int main()
{
    add(3,4);
    //add("RAM","SHYAM");
   add(3.2,4.5,0.0);
    return 0;
    getch();

}
