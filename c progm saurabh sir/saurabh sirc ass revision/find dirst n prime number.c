#include<stdio.h>
int main(){
int i,j,n,count=0,r;
printf("plzz enter number");
scanf("%d",&n);
for(i=2;;i++)
{
for(j=2;j<=i;j++){
r=i%j;
if(r==0)
break;
}
if(i==j)
{printf("%d\t",j);
count++;}
if(count>=n)
break;
}
}
