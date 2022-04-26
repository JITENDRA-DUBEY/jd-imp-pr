#include<stdio.h>
int sum(int );
int main()
{
int n,k;
printf("plzz enter the last number\n");
scanf("%d",&n);
k=sum(n);
printf("%d",k);
return 0;
}
int sum(int n)
{
 if(n>=1)
 return (n+sum(n-1));
}
