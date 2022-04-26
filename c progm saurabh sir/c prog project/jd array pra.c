#include<stdio.h>
int main()
{
int i,a[10],sume=0,sumo=0;
float avg;
printf("plzz enter the 10 numbers:-\n");
for(i=0;i<=9;i++)
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
