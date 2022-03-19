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
    int i,j,n,po=0,ne=0,ze=0;
    
    scanf("%d",&n);
    int a[n];
    float e=n;
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);}
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>0)
        {
            po++;
        }
        else {
            if(a[i]==0)
            {
                ze++;
            }
            else {
            ne++;
            }
        }
    }
    printf("%.6f\n",po/e);
    printf("%.6f\n",ne/e);
    printf("%.6f\n",ze/e);
            
}

