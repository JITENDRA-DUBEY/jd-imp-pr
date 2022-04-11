#include<stdio.h>
int main()
{
 int m=5,n=7,*p1,*p2;
 p1=&*&m;
 p2=&*&n;
 m=p1-p2;

 printf("%d%d%d",*p1,*p2,m);
}
