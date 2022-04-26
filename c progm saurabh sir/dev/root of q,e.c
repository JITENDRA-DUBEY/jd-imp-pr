#include<stdio.h>
int main(){
	int a,b,c, d;
	printf("plzz enter the value of a,b,c ");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-(4*a*c);
	(d>=0)?printf("real root"):printf("imaginary");
	getch();
	return 0;
}
