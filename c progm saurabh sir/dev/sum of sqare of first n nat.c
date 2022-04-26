#include<stdio.h>
int main ()
{
	int i=1,m,sqsum=0;
	printf("plzzz enter the value of m");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		//i=i*i;
		sqsum=sqsum+i*i;
		//printf("%d",i);
			//i=i*i;
	}
    printf("sqare=%d",sqsum);
	return 0;
}
