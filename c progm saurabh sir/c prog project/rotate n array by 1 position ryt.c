//write a c program to rotate an array of n elements to the right by 1 position//rotate of an array
#include<stdio.h>
int main()
{
int i,n,r;
printf("plzzz enter the size of array");
scanf("%d",&n);
printf("plzz enter the numb\n");
int a[n];
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("ryt shift by 1 array:-\n");

r=a[0];
for(i=0;i<=n-1;i++)
{  int temp;
     if(i==0)
    {
        printf("%d\t",a[n-1-i]);

    }
    else
for(i=1;i<=n-1;i++)
{
  a[0]=r;
  printf("%d\t",a[i-1]);
}
}
return 0;
}
