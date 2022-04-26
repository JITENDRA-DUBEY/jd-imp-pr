//write a program to display n natural number and  sum n natural numbers
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;//sum=1; then ans is +1 of previous ans
	printf("enter the last natural where we want to find sum");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",i);
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	return 0;
	
}
