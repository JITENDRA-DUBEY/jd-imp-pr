// wap a program to reverse an array by k step
#include<stdio.h>
int main()
{int n,i,temp;
printf("plzz enter total number of array elements:-\n");
scanf("%d",&n);
printf("plzz enter the element:-\n");
int a[n],b[n],*p,*q;
p=a,q=b;
for(i=0;i<=n-1;i++)
{
    scanf("%d",p+i);
} temp=*(p+n-1);
for(i=0;i<=n-1;i++)
{  *q=temp;
if(i>=1)
 {
   *(q+i)=*p+i-1;
 }
  printf("%d",*(q+i));
}

return 0;
}
