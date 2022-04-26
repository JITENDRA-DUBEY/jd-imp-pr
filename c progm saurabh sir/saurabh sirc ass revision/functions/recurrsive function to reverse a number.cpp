// wrute a reccur function for rotation of num
#include<stdio.h>
void reverse(int );
int main()
{
	int n;
	printf("pls enter a number\n");
	scanf("%d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	int r,d;
	if(n==0)
	return ;
	else
	{
		printf("%d",n%10);
		reverse(n/10);
	}
}
