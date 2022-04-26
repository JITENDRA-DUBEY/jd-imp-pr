//program to print first n term of fibonacci seq
#include<stdio.h>
int main()
{
int n,f,s,i,sum;
printf("plzz enter number of term");
scanf("%d",&n);
printf("plzz enter first two term of series");
scanf("%d%d",&f,&s);
//printf("%d%d",f,s);
for(i=1;i<=n-2;i++)
{
sum=f+s;
//printf("%d",sum);
f=s,s=sum;
}
printf("%dth term of sequence=%d",n,sum);
return 0;
}
