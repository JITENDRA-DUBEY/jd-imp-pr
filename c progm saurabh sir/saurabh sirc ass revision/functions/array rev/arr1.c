#include<stdio.h>
int main()
{ int a[5],i,sum=0;
int *p=a;
printf("pllzz enter the 5 numbers\n");
for(i=0;i<=4;i++)
{
 scanf("%d",p+i);
}
float avg;
for(i=0;i<=4;i++)
{
 sum=sum+*(p+i);
}
printf("avg=%.2f",sum/5.0);
return 0;
}
