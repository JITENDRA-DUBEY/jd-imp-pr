// wrute a reccur function for rotation of num
#include<stdio.h>
void dtob(int );
int main()
{
	int n;
	printf("pls enter a number\n");
	scanf("%d",&n);
	dtob(n);
	return 0;
}
void dtob(int n)
{
	if(n==1)
	  printf("1");
	else
	{
	
	  dtob(n/2);
	 printf("%d",n%2);	   
}
}
