//write a c program to rotate an array of n elements to the right by 1 position//rotate of an array
#include<stdio.h>
int main()
{
int i,n,r,j,ro=2,m=1;
printf("plzzz enter the size of array");
scanf("%d",&n);
printf("plzz enter the numb\n");
int a[n];
int b[n];
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
fflush(stdin);
printf("ryt shift by 1 array:-\n");
fflush(stdin);
while(m!=2)
{
for(j=0;j<=n-1;j++)
{
    if(j==0)
    {
        b[j]=a[n-1];
    }
    else
       {
           b[j]=a[j-1];}
for(i=0;i<n;i++)
{
    printf("%d\n",b[i]);
}
}
return 0;
}
