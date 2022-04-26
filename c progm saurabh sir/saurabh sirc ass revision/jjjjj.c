#include<stdio.h>
int main()
{
int n,f=0,s=1,sum=0,on,i;
printf("plzz enter the total number of febonic seq\n");
scanf("%d",&n);
on=n-2;
printf("%d%d",f,s);
for(i=1;i<=on;i++)
{
    sum=f+s;
    //printf("%d",sum);
    f=s;s=sum;
}printf("NTH TERM=%d",sum);
}
