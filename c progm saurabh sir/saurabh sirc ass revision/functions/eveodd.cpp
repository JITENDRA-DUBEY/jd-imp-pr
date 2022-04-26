// check even ret 1 or odd ret 0; tsrs
#include<stdio.h>
int evodd(int n);
int main()
{
	int a,b;
	printf("plzz enter a number\n");
	scanf("%d",&a);
	b=evodd(a);
	printf("%d",b);
} 
int evodd(int n)
{
	if(n%2==0)
	return 1;
	else 
	return 0;
}
