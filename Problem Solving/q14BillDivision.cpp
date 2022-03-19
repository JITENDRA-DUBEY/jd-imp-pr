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

//jsg
int main()
{
    int n,i,k,tp,sum=0;//tp=total prize which is anna pay k-1 index not eat
    scanf("%d%d",&n,&k);
    int a[n];
    //printf("plzz enetr your ele\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i!=k)
        {
            sum=sum+a[i];
        }
    }
    //printf("your bill");
    scanf("%d",&tp);
    if(tp==sum/2)
    {
        printf("Bon Appetit");
    }
    else {
    printf("%d",tp-sum/2);
    }
}

