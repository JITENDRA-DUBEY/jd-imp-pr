#include<stdio.h>
int main ()
{
int i =1,m,sum=0;
printf("enter the value of m ");
scanf("%d",&m);
for(i;i<=m;i++)
{
	sum=sum+i;
	printf("%d\n",i);

}
printf("sum =%d\n",sum);
return 0 ;
}
