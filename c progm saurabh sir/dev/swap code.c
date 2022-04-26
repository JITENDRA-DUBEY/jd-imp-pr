#include<stdio.h>
int main()
{
	int a,b;
	printf("plzz enter a and b value");
	scanf("%d %d",&a,&b);
	printf("a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap value of a and b");
	printf("a=%d and b=%d",a,b);
	
	return 0;
	
}
