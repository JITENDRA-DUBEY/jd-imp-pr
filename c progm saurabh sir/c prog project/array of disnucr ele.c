// program to found distnict elemnt of an array
#include<stdio.h>
int main()
{  int i,n;
    printf("plzz enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("plzz enter element of array");
    for(i=0;i<=n-1;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    { int j;
         for(j=0;j<i;j++)

             if(a[i]==a[j])
                break;
         if(i==j)
            printf("%d",a[i]);


    }
}
