#include<stdio.h>
int main(){
	int a;
	printf("plzz enter year ");
	scanf("%d",&a);
	(a%4==0)?printf("leap yr"):printf("non leap yr");
	getch();
	return 0;
}
