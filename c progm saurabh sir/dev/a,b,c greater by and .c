#include<stdio.h>
int main()
{
	int a,b,c;
	printf( "enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("%d",a);
	//if(b>c&&c>a)
	else if(b>c&&c>a) //(b>c)
	printf("%d",b);
	else
	printf("%d",c);
	getch();
	return 0;
}
//this profgram is not valid when we take n
//input like5 2 2 it gaves output because here condition first is true that gave output 5 
//then second if else code run that code also give some output acccording to condition here else part gave 2 
// so final outcome is 52
// so here we use else if leader that is used when we want to print only single statement from 3 or more statement
// for than in second stat we use else if
