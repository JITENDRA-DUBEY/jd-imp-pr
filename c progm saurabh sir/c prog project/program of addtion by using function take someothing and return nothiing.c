//program of addtion by using function take someothing and return nothiing
#include<stdio.h>
 void add(int,int);
 int main()
 {
     int x,y;
     printf("plzz enter two number");
     scanf("%d%d",&x,&y);
     add(x,y);
     getch();
     return 0;

 }
 void add(int a,int b)
 {
     int c;
     c=a+b;
     printf("sum =%d",c);
 }
