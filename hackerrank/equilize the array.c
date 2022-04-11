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
    int n,i,j,e=0,count,total=0,d=0;
    printf("enter the size of array\n");

    scanf("%d",&n);
    int a[n];
    printf("enter array ele\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
    {   count=1;
       // here we count a elememnt how many times occurs in array
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }

        }// if count>total then updatevalue
         if(count>total)
            {total=count;}


    }// for total - max size same elem arrray
     printf("%d",n-total);



}
