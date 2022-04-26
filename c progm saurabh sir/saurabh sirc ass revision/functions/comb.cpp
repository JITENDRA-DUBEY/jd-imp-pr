// permutation ts rs;
#include<stdio.h>
unsigned long int ncr(unsigned long int n,int r);
int main()
{
	int a,r;
    unsigned long int b;
	printf("plzz enter total number and choices\n");
	scanf("%d%d",&a,&r);
	b=ncr(a,r);
	printf("%llu",b);
	return 0;
} 
unsigned long int ncr(unsigned long int n,int r)
{   unsigned long int pc=1,cm;
int i,rm=1;
	for(i=0;i<r;i++)
	{
		pc=pc*(n-i);
	}
	for(i=1;i<=r;i++)
	{
		rm=rm*i;
	}
	cm=pc/rm;
	return cm;
}
