// wrute a reccur function for rotation of num
#include<stdio.h>
int fbnc(int );
int main()
{
	int n,s;
	printf("pls enter a number\n");
	scanf("%d",&n);
	s=fbnc(n);
	printf("%d",s);
	return 0;
}
int fbnc(int n)
{
	int sum;
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	sum=fbnc(n-1)+fbnc(n-2); 
	return sum;
}

