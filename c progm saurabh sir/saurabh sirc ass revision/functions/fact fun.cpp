// fact of number tsrs
#include<stdio.h>
unsigned long int fact(unsigned long int n);
int main()
{
	int a;
    unsigned long int b;
	printf("plzz enter a number\n");
	scanf("%d",&a);
	b=fact(a);
	printf("%llu",b);
	return 0;
} 
unsigned long int fact(unsigned long int n)
{   unsigned long int fac=1;
	int i=1;
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
