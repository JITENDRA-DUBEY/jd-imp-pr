#include<iostream>
#include<string.h>
void conc(char s[],char t[]);
using namespace std;
int main(){
conc("happy","singh");

}
void conc(char s[],char t[]){
strcat(s,t);
cout<<s;

}
