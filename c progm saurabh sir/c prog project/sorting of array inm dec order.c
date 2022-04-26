//sorting of array in decending order
#include<stdio.h>
int main()
{
int i,j,temp,n;
printf("plzz enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("plzz enter the elements");
for(i=0;i<=n-1;i++)
{
    scanf("%d",&a[i]);
}
printf("decending order is:-\n");
for(i=0;i<=n-1;i++)
{

  for(j=i+i;j<=n-1;j++)
  {
    if(a[i]<a[j])
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
  printf("%d\n",a[i]);
}
return 0;
}
