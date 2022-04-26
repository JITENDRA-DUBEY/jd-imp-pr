//program to write all prime numb under100
#include<stdio.h>
int main()
{
int n=100,i,r;

for(i=2;i<=99;i++)
{
r=n%i;
printf("%d",r);
if(r==0)
break;
}
return 0;
}
