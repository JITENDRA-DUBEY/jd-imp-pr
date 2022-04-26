//progrm to print binaryequivalent of decimal
#include<stdio.h>
int main()
{
int n=12,i=1,r;
for(i=1;n>=1;i++)
{
  r=n%2;
  printf("%d",r^1);
  n=n/2;
}
return 0;
}
