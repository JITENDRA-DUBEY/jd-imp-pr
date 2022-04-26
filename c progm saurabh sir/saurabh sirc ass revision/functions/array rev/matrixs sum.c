#include<stdio.h>
int main()
{int n;
printf("plzz enter the size of array\n");
scanf("%d",&n);
int a[n][n],b[n][n],i,j,d,e,sum=0;
int *p=a;
int *q=b;
printf("plzz enter first array elements\n");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
 scanf("%d",&a[i][j]);
}
}
printf("plzz enter second array elements\n");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
 scanf("%d",&b[i][j]);
}
}
printf("now sum=\n");
for(i=0;i<n;i++)
{   sum=0;
    for(j=0;j<n;j++)
    {
        sum=sum+a[i][j]+b[i][j];
        printf("%d ",sum);
    }printf("\n");
}
}
