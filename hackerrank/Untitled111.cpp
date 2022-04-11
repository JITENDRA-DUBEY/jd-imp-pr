#include<iostream>
#include<string.h>
using namespace std;
class operation{
static float pi;
float r,m;
int l,b;
char *p,*q;
public:
float area(float radius){
    r=radius;
return pi*r*r;
}
int area(int lenght,int breadth){
l=lenght;
b=breadth;
return l*b;
}
int add(int x,int y){
l=x;
b=y;
return l+b;
}
float add(float i,float j){
r=i;
m=j;
return r+m;
}
char *add(char *a,char *b){
p=a;
q=b;
strcat(p,q);
return p;
}
};
float operation::pi=3.14;


int main(){
operation circle;
cout<<"\nArea of circle "<<circle.area(3)<<"\n";
cout<<"\nArea of rectangle "<<circle.area(4,5)<<"\n";
cout<<"\nAddition of integer  "<<circle.add(4,5)<<"\n";
cout<<"\nAddition of float  "<<circle.add(9.52,9.24)<<"\n";
cout<<"\nConcated two string "<<circle.add("happy","singh")
}
