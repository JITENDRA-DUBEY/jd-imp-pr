// permutation ts rs;
#include<stdio.h>
unsigned long int pnc(unsigned long int n,int r);
int main()
{
	int a,r;
    unsigned long int b;
	printf("plzz enter total number and choices\n");
	scanf("%d%d",&a,&r);
	b=pnc(a,r);
	printf("%llu",b);
	return 0;
} 
unsigned long int pnc(unsigned long int n,int r)
{   unsigned long int pc=1;
int i;
	for(i=0;i<r;i++)
	{
		pc=pc*(n-i);
	}
	return pc;
}
