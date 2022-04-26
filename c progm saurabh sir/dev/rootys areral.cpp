#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("plzz entr the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	printf("roots are real and distnict");
	else 
	if(d==0)
	printf("roots are real and equal");
	else
	printf("roots are imaginary");
	return 0;
}
