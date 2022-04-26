//function of sorting of an array of n size tsrn type
#include<stdio.h>
void sort(int b[],int size);
int main()
{
int size;
int a[size];
printf("plzz enter the size");
scanf("%d",&size);
sort(a,size);
return 0;
}
void sort(int b[],int size)
{
    int i,j,temp;
for(i=0;i<=size-1;i++)
{
scanf("%d",&b[i]);//we find an array


 for(i=0;j<=size-1;i++)
 {
   for(j=i+1;j<=size-1;j++)
  {
    if(b[i]>b[j])
      {
        temp=b[j];
        b[i]=b[j];
        b[j]=temp;
      }

  }printf("%d",b[i]);
 }
}
}
