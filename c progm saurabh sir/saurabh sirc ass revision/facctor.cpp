#include<stdio.h>
int main()
{
	int a,b;
	int n;
	printf("plzz enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("plzz enter a 1,2,3,4 number ");
	fflush(stdin);
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("%d\n",a+b);
			break;
			case 2:
			printf("%d\n",a-b);
			break;
			case 3:
			printf("%d\n",a*b);
			break;
			case 4:
			printf("%d\n",a/b);
			break;
	   default : printf("plzz enter valid number");
	}
	return 0;
}
