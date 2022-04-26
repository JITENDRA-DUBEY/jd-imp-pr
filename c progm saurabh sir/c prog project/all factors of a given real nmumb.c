#include<stdio.h>
void primefact(int x);
int main()
{
int x;
printf("plzz enter a number");
scanf("%d",&x);
primefact(x);
getch();
return 0;
}
void primefact(int a)
{
int i;
for(i=2;a>1;i++)
{
while(a%i==0)
{
printf("%d\t",i);
a=a/i;
i++;
}
}
}




