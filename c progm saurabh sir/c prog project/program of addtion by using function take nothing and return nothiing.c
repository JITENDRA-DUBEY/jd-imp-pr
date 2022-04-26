//program of addtion by using function take nothing and return nothiing
#include<stdio.h>
  void add();
int main()
{
	 add();
	//getch ();
	return 0;}

   void add()
{
	int a, b,c;
	printf("plzz enter two number");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum=%d",c);
}

