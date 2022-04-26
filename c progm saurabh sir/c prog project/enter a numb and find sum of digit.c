#include<stdio.h>
//program to count sum of digit
int main()
{
int n,on,m,d=0,i=1,sum=0;
printf("plzz enter a number");
scanf("%d",&n);
on=n;
while(n!=0)
{
n=n/10;
d++;
}
//printf("%d",d);
for(i;i<=d;i++){
m=on%10;
on=on/10;
sum=sum+m;}
printf("sum of digit=%d",sum);
return 0;
}
