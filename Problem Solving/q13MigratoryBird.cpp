#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//bird type counting
#include<stdio.h>
int main()
{
 int i,n,j,count,m=0,max;
  //printf("plzz enter the size of array:-\n");
  scanf("%d",&n);
  int a[n],b[5];
  for(i=0;i<=n-1;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=1;j<=5;j++)
  {  count=0;
    for(i=0;i<=n-1;i++)
    {
    if(j==a[i])
    count++;
    }
    b[m]=count;
    m++;
  }
  for(i=0;i<m;i++)
    {
  //printf("%d",b[i]);}
  max=b[0];}
 for(i=1;i<m;i++)
   {
     if(b[i]>max)
     max=b[i];
   }
  // printf("max value=%d\n",max);
   for(i=0;i<m;i++)
    {
     if(max==b[i])
     break;
  } printf("%d",i+1);
}



