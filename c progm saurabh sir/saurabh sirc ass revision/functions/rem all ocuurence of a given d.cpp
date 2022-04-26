//dobt to remove all occurence of a number from a digit ts rn
#include<stdio.h>
void remocod(int ,int  );
int main()
{
	int a,b,sn;
	printf("plzz enter a number \n");
	scanf("%d",&a);
	printf("plzz enter a nummber whose occure u want to remove");
	scanf("%d",&b);
	remocod(a,b);
	return 0;
}
void remocod(int n,int d)
{
	int r,i,e=0,on;
	on=n;
	while(n!=0)
	{
		n=n/10;
		e++;
	} n=on;
	for(i=1;i<=e;i++)
	{ 
	  r=n%10;
	  if(r!=d)
	  {
	  	printf("%d",r);
	  }
		n=n/10;
	}  	revrse();
}
