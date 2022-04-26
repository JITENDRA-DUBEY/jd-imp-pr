// to show the indeex number
#include<stdio.h>
int main()
{
int i,j,t=19;
int a[4]={2,7,11,15};
for(i=0;i<2;i++)
{
for(j=i+1;j<=3;j++)
{
 if(a[i]+a[j]==t)
 break;
}
if(a[i]+a[j]==t)
 break;
}
if(i<=3&&j<=3)
printf("[%d %d]",i,j);
else
printf("target is outof scope");
return 0;


}
