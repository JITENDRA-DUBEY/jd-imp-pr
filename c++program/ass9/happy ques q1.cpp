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
char p[30];
char m[30];
cout<<s<<"\n"<<t;
strcat(s,t);
strcpy(p,s);
strcpy(m,t);
strcat(p,m);
cout<<"\n"<<p;

}

int main()
{

    float a,b;
    cin>>a>>b;



 cout<<"\nAddition of two int = "<<add(3,4);

  cout<<"\nAddition of two float = "<<add(a,b);
  cin.ignore();

   add("jitendra","kumar");
   //cout<<add(e,f);
    return 0;
    getch();

}
