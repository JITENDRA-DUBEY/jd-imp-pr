//sorting of array of n element
#include<stdio.h>
int main()
{
int i,j,n,temp;//n==sizeof array
printf("plzz enter the size of aray");
scanf("%d",&n);
int a[n];
printf("plzz enter the elemnets\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);//we got elemt now arrange in asc order
}
for(i=0;i<=n-1;i++)
{
for(j=i+1;j<=n-1;j++)
{
  if(a[i]>a[j])
  {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  }
}printf("%d",a[i]);
}
}
