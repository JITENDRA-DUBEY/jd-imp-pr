//lcm of two num,b
#include<stdio.h>
int main()
{
int a,b,lc=1,i;
printf("plzz enter a numb\n");
scanf("%d%d",&a,&b);
for(i=2;i<=a;i++)
{
  if(a%i==0||b%i==0)
  {
    if(a%i==0)
    {
      a=a/i;
    }
    if(b%i==0)
    {
    b=b/i;
    }
   lc=lc*i;
   }
}  printf("%d",lc);
}
