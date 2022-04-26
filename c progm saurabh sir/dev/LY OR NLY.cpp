#include<stdio.h>
int main()
{
	int a;
	printf("enter a year");
	scanf("%d",&a);
	if(a%100==0)

	{
	printf("%d is ly",a);}
    else
    {
	if(a%4==0)
	
		printf("%d is ly",a);
		else
		printf("%d is nly",a);
	}



	return 0;
}
	
