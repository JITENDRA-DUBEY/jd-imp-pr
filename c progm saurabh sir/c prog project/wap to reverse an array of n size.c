//program to reverse an array of n element
#include<stdio.h>
int main()
{
int i,n,j,temp;
printf("plzz enter the total nuber of element:-\n");
scanf("%d",&n);
int a[n];
printf("plzz enter the elements of arrat:-\n");
for(i=0;i<=n-1;i++)
{scanf("%d",&a[i]);
}
printf("reverse of an array is:-\n");
for(i=0;i<=n-1;i++)
{
    j=n-1-i;
    if(i<n/2)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }printf("%d\t",a[i]);
}
return 0;
}
