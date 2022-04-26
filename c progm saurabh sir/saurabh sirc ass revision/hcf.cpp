// program to find hcf

#include<stdio.h>
int main()
{
	int i,hcf=1,a,b,e,j;
	printf("plzz enter two number\n");
	scanf("%d%d",&a,&b);
	if(a>b)
    e=a;
   else
   e=b;
	for(i=1;i<=e;i++)
	{  for(j=1;j<i;j++)
	{
		if((a%j==0)&&(b%j==0))
		  {
	       hcf=hcf*j;
		  a=a/j;
		  b=b/j;}
	}
		  
	}
	printf("HCF=%d",hcf);
}
