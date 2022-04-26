#include<stdio.h>
int main()
{
	int i,j,n=1;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3-i;j++)
		{
			printf(" ");
			
		} 
	       for(i=0,j=3;j>=0&&i>=3;i++,j--)
	       {
	       	if((j=3-i)||(j=3+i))
	       	printf("1");
		   }
			}
			printf("\n");
		
	}
