// q4 find target as a sum of two element of an array
#include<stdio.h>
int main()
{
int i,n1,j,t=14;
int a[4]={2,7,11,15};
for(i=0;i<=3;i++)
{
     n1=a[i];

    for(j=i+1;j<=3;j++)
   {
     if(t==n1+a[j])
     break;
   }
   if(t==n1+a[j])
    break;
}
if(i<=3&&j<=3)
   printf("%d %d",i,j);
    else
    printf("target is not find in given array scope");

return 0;
}
