#include<stdio.h>
int main()
{
    int i,n;
     long unsigned int s=0;
     scanf("%d",&n);
     long unsigned int a[n];
     for(i=0;i<=n-1;i++)
     {
         scanf("%lu",&a[i]);
     }
     for(i=0;i<=n-1;i++)
     {
         s=s+a[i];
     }
     printf("%lu",s);
}

