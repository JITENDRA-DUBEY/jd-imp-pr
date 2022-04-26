#include<stdio.h>
int sumofdi(int n);
int main()
{
int n,d,k;
n=123;
d=3;
k=sumofdi(d);
printf("%d",k);
return 0;
}
int sumofdi(intn)
{
int s,r,d,n;

if(d>0){
r=n%10;
n=n/10;
s=r+sumofdi(d-1);
}
}



