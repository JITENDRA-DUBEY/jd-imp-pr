#include<stdio.h>
int main()
{
	int i,j,space=1;
	for(i=1;i<=4;i++)
	{
		for(space;space<=4;space++)
		{
			if(space<=4-i)
			printf(" ");
		}
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			printf("*");
			else
			printf(" ");
		}printf("\n");
		
	}
}
