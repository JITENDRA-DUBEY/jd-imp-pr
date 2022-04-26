#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("plzz enter last number");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
	return 0;
}
