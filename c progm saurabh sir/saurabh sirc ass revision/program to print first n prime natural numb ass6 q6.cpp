// program to print first n prime number 
#include<stdio.h>
int main()
{
	int i,j,n,d=1;
	printf("plzz enter the number at which u want to print prime\n");
	scanf("%d",&n);
	for(i=2;;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}if(i==j)
		{
		printf("%d\t",i);
		d++;
	   }
	   if(d>n)
	   break;
	}
	return 0;
}
