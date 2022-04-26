//program to find greater number in between given 3 num
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("ENTER THRE NUMB");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2&&n1>n3)
	printf("n1 is greater");
	if(n2>n1&&n2>n3);
	printf("n2 is greater");
	if(n3>n1&&n3>n2)
	printf("n3 is greater");


	return 0;
}
