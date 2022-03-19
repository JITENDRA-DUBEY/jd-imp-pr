//birthday candle prob
#include<stdio.h>
int main(){
int i,max,n,count=0;
scanf("%d",&n);
int a[n];
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

