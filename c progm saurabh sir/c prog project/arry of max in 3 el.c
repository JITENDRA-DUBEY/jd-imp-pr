#include<stdio.h>
int main()
{
int i,max;
int a[]={10,1,9};
max=a[0];
for(i=1;i<=2;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("max value=%d",max);
return 0;


}
