#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("plzz enter");

    int a[5];
    for(i=0;i<=n-1;i++)
    {   int temp;
        j=n-1-i;
        if(i<n/2)
        { temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }printf("%d",a[i]);
    }
    return 0;
}
