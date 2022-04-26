//write a program to display n natural number and  sum n natural numbers
#include<stdio.h>
int main()
{
	int i=1,m,sum=0;//sum=1; then ans is +1 of previous ans
	printf("enter the last natural where we want to find sum");
	scanf("%d",&m);
	while(i<=m)
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
	return 0;
	
}
