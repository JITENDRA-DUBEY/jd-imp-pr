//write a program to sum n natural numbers
#include<stdio.h>
int main()
{
	int i=0,n,sum=0;//sum=1; then ans is +1 of previous ans
	printf("enter the last natural where we want to find sum");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	return 0;
	
}
