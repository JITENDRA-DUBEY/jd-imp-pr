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
    int i,j,n,k,count=0;
    printf("size of array\k");
    scanf("%d",&n);
    int a[n];
    printf("els of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }printf("k value\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
            count++;
        }
    }printf("%d",count);
}
