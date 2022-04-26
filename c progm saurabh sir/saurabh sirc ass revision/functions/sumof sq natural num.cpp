//tsrs sum of n nat//tsrn first n nat
#include<stdio.h>
int sumofsqnat(int );
int main()
{
	int a,sn;
	printf("plzz enter the last term \n");
	scanf("%d",&a);
	sn=sumofsqnat(a);
	printf("%d",sn);
	return 0;
}
int sumofsqnat(int n)
{   int i=1,sum=0;
	while(i!=n+1)
	{
	   //	printf("%d\n",i);
	   sum=sum+i*i;
		i++;
	}
	return sum;
}
