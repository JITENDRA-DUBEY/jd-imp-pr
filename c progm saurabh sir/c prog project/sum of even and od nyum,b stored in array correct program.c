#include<stdio.h>
int main()
{
int i,n,sume=0,sumo=0;
printf("plzz enter the total number of elements;-\n");
scanf("%d",&n);
int a[n];
printf("plzz enter elements;-\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
sume=sume+a[i];
else
    sumo=sumo+a[i];
}

printf("sum of even=%d\n",sume);
printf("sum of odd= %d",sumo);
}
