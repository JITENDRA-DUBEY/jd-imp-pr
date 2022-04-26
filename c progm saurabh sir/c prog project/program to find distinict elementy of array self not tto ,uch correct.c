// program to find a distnict el of array only valid for singal digitis repeated

#include<stdio.h>
int main()
{
    int i,j,r,temp,n;
    printf("plzz enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("plzz enter element of array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            } r=a[i];

        }printf("disnict elements:-\n");
        printf("%d\t",a[i]);
        for(i=0;i<=n-1;i++)
        {
            if(a[0]!=a[i])
            {
            printf("%d\t",a[i]);
            }
        }

    }

    }
