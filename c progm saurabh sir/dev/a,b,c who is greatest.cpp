#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter three number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)
		{
			printf("%d is gretest",a);
		}
		else if(b>c){
			printf("%d is greatest",a);
		}
		else
		printf("%d is greatest",c);
		if(b>c){
			if(b>a){
			printf("%d is greatest",b);}
			else if(c>a){
				printf("%d is greatest",b);
			}
		}else 
		printf("%d is greatest",a);
			
	}
 return 0;
 }
