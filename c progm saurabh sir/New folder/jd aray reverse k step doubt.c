// wap a program to reverse an array by k step
#include<stdio.h>
int main()
{int n,i,temp,k;
printf("plzz enter total number of array elements:-\n");
scanf("%d",&n);
printf("plzz enter the element:-\n");
int a[n],b[n],r[n],*p,*q,*t,m;
p=a,q=b,t=r;
for(i=0;i<=n-1;i++)
{
    scanf("%d",p+i);
}
printf("plzz entert the value of k:-\n");
scanf("%d",&k);
m=k;
for(i=0;i<=n-1;i++)
{
    if(i<m)
    {
      for(i=0;i<=m-1;i++)
    {
    *(t+i)=*(p+n-m);
    m--;}
    }
    else{
for(i=k;i<=n-1;i++)
{
 *(t+i)=*(p+i-k);
 }
    }
printf("%d",*(t+i));
 }
return 0;
}
