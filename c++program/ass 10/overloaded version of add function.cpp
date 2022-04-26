//jsg overloaded version of add function;
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
// note function signature does not depend on return type of function its only depend on number of argument and their type
// and function name;
float add(int a,int b);
float add(float a,float b);
 void add(char s[],char t[]);
int main()
{
    // for set precison

   cout<<"\nAdd of two int value is : "<< add(3,4);
   //cout<<"\nAdd of two float value is : "<< add(5.5,4.8);// note by default compiler take actual argument as a integer type
   // so in the sec fun 5.5,4.8 treat as an int value and we want to store this in float type (formal argt) so it will gave an error
   // for removing that we have declare data type during calling ofd fun by using f;
    cout<<fixed;
    cout<<setprecision(3);
   cout<<"\nAdd of two float value is : "<< add(5.5456f,4.8453f);
   add("jitendra","kumar");
   //cout<<"\nSTRCAT : "<<add("jitendra","kumar");
}
float add(int a,int b){return a+b;}
float add(float a,float b){return a+b;}
void add(char s[],char t[])
{
    char p[50],q[50];
    strcpy(p,s);
    strcpy(q,t);
   strcat(p,q);

    cout<<"\n"<<p;
}
