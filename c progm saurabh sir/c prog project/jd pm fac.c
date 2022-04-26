#include<stdio.h>
int main()
{
int x,i;
printf("plzz enter a number");
scanf("%d",&x);
for(i=2;x>1;i++)
{
while(x%i==0)
{
printf("%d\t",i);
x=x/i;
}
}
return 0;
}
