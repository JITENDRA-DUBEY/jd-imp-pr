//lcm of two number
#include<stdio.h>
int main()
{
	int i=1,j=1,lcm=1,a,b;
	printf("plzz enter two numbers\n");
	scanf("%d%d",&a,&b);
	while(a==0||b==0)
    {
	   if(a%i==0)
	   {
	   	a=a/i;
	   	i++;
	   }
	   if(b%j==0)
	   {
	   	b=b%j;
	   	j++;
	   }
	   if(i==j)
	   {
	   	lcm=lcm*i;
	   }
	   else
	   {
	   	if(a%i==0&&b%i!=0)
	   	lcm=lcm*i;
	   	 else
	   	lcm=lcm*j;
	   }
	}printf("%d",lcm);	
}
