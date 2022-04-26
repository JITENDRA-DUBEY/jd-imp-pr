//tsrn first n nat
#include<stdio.h>
void nat(int );
int main()
{
	int a;
	printf("plzz enter the last term \n");
	scanf("%d",&a);
	nat(a);
	return 0;
}
void nat(int n)
{   int i=1;
	while(i!=n+1)
	{
		printf("%d\n",2*i);
		i++;
	}
}
