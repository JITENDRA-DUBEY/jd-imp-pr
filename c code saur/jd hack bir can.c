//birthday candle prob
#include<stdio.h>
int main(){
int i,max,n,count=0;
printf("plzz enter the size of array \n");
scanf("%d",&n);
int a[n];
printf("plzz enter array element");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
 max=a[0];
 for(i=0;i<=n-1;i++)
 {
   if(a[i]>max)
   max=a[i];
 }//printf("%d",max);
 for(i=0;i<=n-1;i++)
 {
     if(max==a[i])
        count++;
 }printf("%d",count);

}
