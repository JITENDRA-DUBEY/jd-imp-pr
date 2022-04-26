#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,k,n,d,j,count=0,m,sum;
    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("plzz enter array elements which belong 1 to 5\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }fflush(stdin);
    printf("plzz enter the day and monthnumber\n");
    scanf("%d %d",&d,&m);
    for(i=0;i<n;i++)
    {    if((n-i)<m)
          {
              break;
          }
         sum=0;
         for(j=0;j<m;j++)
         {  k=i+j;
            sum=sum+a[k];
         }if(sum==d)
        count++;

    }printf("%d",count);
    return 0;
}
