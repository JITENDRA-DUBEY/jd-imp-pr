#include<stdio.h>
int remocod(int );
int main()
{
	int a,s;
	printf("plzz enter a number \n");
	scanf("%d",&a);
  s=remocod(a);
	printf("%d",s);
	return 0;
}
int remocod(int n)
{  int sum=0,r;
   if(n>0)
    { 	r=n%10;
       sum=r+remocod(n/10); 
        
    } 	return sum;
}
