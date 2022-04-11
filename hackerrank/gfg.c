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
int main()
{

int n,i,j,e;
scanf("%d",&n);
int t[n];
for(i=0;i<n;i++)
{
    scanf("%d",&t[i]);
}
int a[61];
a[0]=1;

for(i=1;i<=60;i++)
{
   if(i%2==0)
   {
       a[i]=a[i-1]+1;
   }
   else
   a[i]=2*a[i-1];
}
//or(i=0;i<n;i++)
//{
//printf("%d",a[i]);
//}
// first we store in t[j],then compare t[j elem anfd i value and print frioma [i]
for(j=0;j<n;j++)
{
    e=t[j];


        printf("%d\n",a[e]);

    }
}



