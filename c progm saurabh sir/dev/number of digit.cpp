#include<stdio.h>
int main()
{
	int a,i,c;
	printf("plzz enter number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	a=a/10;
	}
	printf("nub of digit =%d",a);
	return 0;
	
}
