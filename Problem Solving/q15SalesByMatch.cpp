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
    int i,p=0,n,d,j,sum=0;
   // printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    fflush(stdin);
    //printf("plzz enter array elements\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }fflush(stdin);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            break;
        }
        if(i==j)
        {   //printf("%d",a[i]);
            d=0;
            for(j=0;j<n;j++)
                {
                if(a[i]==a[j])
                    d++;
            }//printf("%d occurs %d times\n",a[i],d);
              sum=sum+(d/2);

        }
        //printf("total pair=%d",sum);

    }printf("%d",sum);
}

