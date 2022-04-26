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
    int i,n,j,count;
    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("plzz enter the elemnrnts\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }if(i==j)
        { count=0;
        printf("%d",a[j]);
        for(j=0;j<=n-1;i++)
        {
            if(a[j]==a[i])
                count++;
        }
        }printf("%d occur at %d times",a[i],count);
    }

    return 0;
}
