#include<stdio.h>
int main ()
{
	int i=1,m,sqsum=0;
	printf("plzzz enter the value of m");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		//i=i*i;
		sqsum=sqsum+2*i-1;
		printf("%d\n",2*i-1);
			//i=i*i;
	}
    printf("sum of odd nat=%d\n",sqsum);
	return 0;
}
