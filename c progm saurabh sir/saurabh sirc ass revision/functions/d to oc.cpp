// wrute a reccur function for decimal to ocatal 
#include<stdio.h>
void dtooctb(int );
int main()
{
	int n;
	printf("pls enter a number\n");
	scanf("%d",&n);
	dtooctb(n);
	return 0;
}
void dtooctb(int n)
{
	if(n==1)
	  printf("1");
	else
	{
	
	  dtooctb(n/8);
	 printf("%d",n%8);	   
}
}
