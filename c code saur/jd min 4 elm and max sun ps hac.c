// sum of min in 4 term and maxim
#include<stdio.h>
int main()
{
int i,j,min=0,max=0,n,sum;
 //printf("plzz enter the size of array :-\n");
 scanf("%d",&n);
 int a[n],b[n];
// printf("plss enter the array elements:-\n");
 for(i=0;i<=n-1;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<=n-1;i++)
   {sum=0;
   for(j=0;j<=n-1;j++)
    {
    if(j!=i)
    {
      sum=sum+a[j];
    }
    }b[i]=sum;
   }

 //printf("sum array\n");
 for(i=0;i<=n-1;i++)
 {
  //printf("%d\t",b[i]);
 }
 //find min elemnent in sum array
 min=b[0];
 for(i=1;i<=n-1;i++)
 {
     if(b[i]<min)
        min=b[i];
 }// printf("%d\n",min);
 max=b[0];
 for(i=1;i<=n-1;i++)
 {
     if(b[i]>max)

        max=b[i];
 } printf("%d %d",min,max);

 return 0;
 }
