//program to count digit of a given number3 digit number
#include<stdio.h>
int main()
{
	int m;
	printf("enter a numb");
	scanf("%d",&m);
    if(m<=9)
    printf("numb is single digit");
    else
	{
    if(10>=m<=99) 
	printf("numb is two digit");
    else
	printf("numb is three digit");
    }
	return 0;
}
	   
