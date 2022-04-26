//sorting of array
#include<stdio.h>
int main()
{
int i,j,temp;
int a[]={1,3,4,2,5};
for(i=0;i<=4;i++)
{
    for(j=i+1;j<=4;j++)
  {
    if(a[i]>a[j])
    {
    //use swap
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }


  }printf("%d",a[i]);
}
}
