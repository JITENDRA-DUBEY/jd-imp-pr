#include<stdio.h>
int remocod(int );
int main()
{
	int a,s;
	printf("plzz enter a number \n");
	scanf("%d",&a);
//	printf("plzz enter a nummber whose occure u want to remove");
//	scanf("%d",&b);
  s=remocod(a);
	printf("%d",s);
	return 0;
}
int remocod(int n)
{  int sum=0;
   if(n>0)
    { 	
       sum=2*n+remocod(n-1); 
    } 	return sum;
}
