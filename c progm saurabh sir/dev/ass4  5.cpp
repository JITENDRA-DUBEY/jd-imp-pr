#include<stdio.h>
int main()
{
	int i=2, m=20;
	while(m%i==0)
	{
		//m=m-1;
		printf("%d\n",m);
		//i=i+1;
		m--;
		m=m-1;
	}

}
