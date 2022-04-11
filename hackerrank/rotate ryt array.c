#include<stdio.h>
void rytrs(int b[],int size);
int main()
{
  int n,i,j,k,q;
  printf("plzz enter total number of ele and rotaion,total number of query\n");
  scanf("%d%d%d",&n,&k,&q);
  int a[n],b[n],qr[q];
  printf("plzz eneter array element\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("plzz enter query elemnts\n");
  for(i=0;i<q;i++)
  {
      scanf("%d",&qr[i]);
  }
  if(k%n>=1)
  {
    for(i=1;i<=k%n;i++)
    {
       rytrs(a,n);
    }
  }// for printing
  //for(i=0;i<n;i++)
  //{
 // printf("%d\n",a[i]);

  //}
  // for printing elemnt according to query
  for(i=0;i<q;i++)
  {
      for(j=0;j<n;j++)
      {
          if(qr[i]==j)
          {
              printf("%d\n",a[j]);
          }
      }
  }
}





void rytrs(int a[],int size)
{  int n=size;
   int b[size];
   int i=0,j=0;
   if(i==0)
   {
    b[i]=a[n-1];
   }
   for(i=1;i<n;i++)
   {
    b[i]=a[i-1];
   }
   // now copying b array in a again
   for(i=0;i<n;i++)
   {
    a[i]=b[i];
   }
}
