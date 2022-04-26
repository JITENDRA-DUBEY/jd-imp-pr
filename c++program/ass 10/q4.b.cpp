//jsg q4 b overloaed version of add function which is used to add to int alue and add to float and conca to string
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int add(int x,int y)
{

    return x+y;
}
float add(float x,float y)
{

    return x+y;
}
void add(char s[],char t[])
{
    strcat(s,t);
    cout<<"\n new name "<<s;

}
//char *add(char s[],char t[])
//{
   // strcat(s,t);
   // cout<<"\n new name "<<s;

//}
int main()
{
   float a,b;
    cin>>a>>b;
    cin.ignore();
    char e[]="jitendra";
    char f[]="kumar";

 cout<<"\nAddition of two int = "<<add(3,4);

  cout<<"\nAddition of two float = "<<add(a,b);
  // or we can use add(3.2f,4.5f);
   add(e,f);
   //cout<<add(e,f);
    return 0;
    getch();

}
