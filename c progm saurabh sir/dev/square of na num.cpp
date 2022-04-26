#include<stdio.h>
int main()
{
	int i =1,m,square;
	printf("enter the value of m");
	scanf("%d",&m);
	while(i<=m){
		square=i*i;
		printf("%d\n",square);
		i++;
	}
	return 0;
}
