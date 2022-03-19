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
    int i,j,n,sd=0,sr=0,c;
    //printf("plzz enter the size of square matrix\n");
    scanf("%d",&n);
    int a[n][n];
    //for pd ele
    //printf("plzz enter elememnts");
     for(i=0;i<=n-1;i++)
      {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(i==j)
            sd=sd+a[i][j];
        }
    }//printf("sum of pd=%d\n",sd);
    //sum of reverse diag
    for(i=0;i<=n-1;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(j==n-1-i)
            sr=sr+a[i][j];
        }
    }//printf("sum of rpd=%d\n",sr);
    c=abs(sd-sr);
    printf("%d",c);
}

