// write a program to reverse an array by ryt 1
#include<stdio.h>
int main()
{
int i,n;
printf("lzz enter the total nuber of element:-\n");
scanf("%d",&n);
int a[n];
int b[n];
printf("plzz enter the elements of arrat:-\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
  if(i==0)
  b[i]=a[n-1];
  if(i>0)
  {
  b[i]=a[i-1];
  }
printf("%d ",b[i]);

}
return 0;
}
