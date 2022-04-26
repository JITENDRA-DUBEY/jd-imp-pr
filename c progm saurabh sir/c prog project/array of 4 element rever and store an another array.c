//program to reverse an array ryt by 1
#include<stdio.h>
int main()
{
int i,j;
int a[5]={4,2,5,1,3};
int b[5];
for(i=0;i<=4;i++)
{
    if(i==0)
        b[i]=a[4-i];
    if(i>0)
       {
        b[i]=a[i-1];
       }
    printf("%d",b[i]);
}
return 0;
}
