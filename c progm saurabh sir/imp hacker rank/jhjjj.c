// program to check given number is part of feb seq ot not
#include<stdio.h>
int main()
{
int n,f=0,s=1,sum,i,j=2;
int a[100];
printf("plzz enter a number");
scanf("%d",&n);
a[0]=0;
a[1]=1;
for(i=1;i<=100;i++)

{
  sum=f+s;
 //printf("%d",sum);
  a[j]=sum;
  f=s;
  s=sum;
   j++;
}
for(i=0;i<100;i++)
{
  //printf("%d\t",a[i]);
  if(a[i]==n)
    break;
}printf("%d",i);
}
