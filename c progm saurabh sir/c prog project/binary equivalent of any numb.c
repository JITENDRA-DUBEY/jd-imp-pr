//progrm to print binaryequivalent of decimal
#include<stdio.h>
int main()
{
int n,i=1,j,s,r;
printf("plzz enter a decimal numb ");
scanf("%d",&n);
for(i=1;n>=1;i++)
{
  r=n%2;
  n=n/2;
  printf("%d",r);}
  s=r*1000;
  printf("%d",s);







return 0;
}
