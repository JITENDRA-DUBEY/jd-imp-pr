#include<stdio.h>
int main()
{

    int n,on,i=1,j,d=0,sum=0,t;
    printf("enter  number");
    scanf("%d",&n);
    t=n;
    n=on;
    while(n!=0)
    {
    	n=n/10;
    	d++;
	}
	//printf("%d",d);
	for(i;i<=d;i++)
	
	{
		j=on%10;
	
		on=on/10;
			printf("%d",j);
	}
	
if(j==t)
printf("pailidrom");
else
	
	printf("not");
	return 0;
}
