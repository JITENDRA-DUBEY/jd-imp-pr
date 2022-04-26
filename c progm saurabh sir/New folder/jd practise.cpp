#include<stdio.h>
int main()
{
	int n,i,r;
	printf("PLZZ ENTER A NUMB ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		r=n%i;
		if(r==0)
		break;
	
	}
	(r==n)?printf("%d is prme"):printf("%d is not prime");
	return 0;
	}
