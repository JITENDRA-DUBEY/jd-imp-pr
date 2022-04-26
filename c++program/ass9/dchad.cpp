#include<iostream>
#include<string.h>
char *conc(char s[],char t[]);
using namespace std;
int main(){
char a[]="happy",b[]="singh";
 cout<<"\n"<<conc(a,b);
}
char *conc(char s[],char t[]){
strcat(s,t);
return s;

}
