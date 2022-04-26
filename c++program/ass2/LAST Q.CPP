//JSG leapy or not_a_directory#include<iostream>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"PRESS ANY KEY\n";
cin>>ch;
if(('a'<=ch&&ch<='z')||('A'<=ch&&ch<='Z')||('0'<=ch&&ch<='9'))
{

 if('a'<=ch&&ch<='z')
     cout<<"LOWER CASE ALPH";
if('A'<=ch&&ch<='Z')
     cout<<"UPPER CASE ALPH";
if('0'<=ch&&ch<='9')
     cout<<"NUMBER";
}
 else
     {
         cout<<"SPECIAL CHAR";
     }


}
