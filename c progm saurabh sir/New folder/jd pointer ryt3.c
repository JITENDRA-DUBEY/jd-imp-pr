// array reverse ryt by 1 by using pointer
#include<stdio.h>
int main()
{
int a[9]={1,2,3,4,5,6,7,8,9};
int *p,*q,b[9],i;
p=a;
q=b;
*q=7;
*(q+1)=8;
*(q+2)=9;
for(i=3;i<=8;i++)
{
*(q+i)=*(p+(i-3));
}
for(i=0;i<=8;i++)
{
printf("%d",*(q+i));
}
}
