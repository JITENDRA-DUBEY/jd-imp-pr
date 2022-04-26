//wap to avg of 10 numb by using array
#include<stdio.h>
int main()
{
int i,s=0,a[10];
float avg;
printf("plzz enter 10 numb");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
avg=s/10.0;
printf("%f",avg);
return 0;
}
