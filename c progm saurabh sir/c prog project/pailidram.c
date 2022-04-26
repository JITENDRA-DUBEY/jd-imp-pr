#include<stdio.h>
int main()
{

    int n,on,i=1,j,d=0,sum=0,t;
    printf("enter  number");
    scanf("%d",&n);

   on=n;
   t=on;

    while(n!=0)
    {
    	n=n/10;
    	d++;}
        n=on;
    	for(i;i<=d;i++){


		j=on%10;

		on=on/10;
        
			printf("%d",j);
	}
//printf("%d\n",t);

if(j==t){
printf("pailidrom");}
else
	{printf("not");
}
	return 0;
}
