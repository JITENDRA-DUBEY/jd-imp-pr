#include<stdio.h>
//program to write fibonacci sequence
int main()
{
int f=0,s=1,i,n,sum;
printf("number of term in feb");
scanf("%d",&n);
printf("%d%d",f,s);
for(i=1;i<=n-2;i++)
{
sum=f+s;
printf("%d",sum);
f=s,s=sum;
}
return 0;
}
