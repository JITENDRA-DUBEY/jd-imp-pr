#include<stdio.h>
int main(){
int i,j,n,r,count=0;
printf("plzz enter two number");
scanf("%d",&n);
for(i=2;;i++)
{
  for(j=2;j<=i;j++)
  {
    r=i%j;
    if(r==0)
    break;
  }if(i==j)
  {printf("%d\t",j);
  count++;
  }
  if(count>=n)
  break;
}
}
