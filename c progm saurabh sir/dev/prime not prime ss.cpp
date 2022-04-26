#include<stdio.h>
int main()
{
	int i,n,r;
	printf("enter a numb");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++){
		r=n%i;
		if(r=0)
		break;}
		
		(r==0)?printf("%d is prime",n):printf("%d is  not prime",n);
		return 0;
		
		
		
	}
	
	
	
